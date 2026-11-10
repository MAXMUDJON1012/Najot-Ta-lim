const themeToggle = document.getElementById('themeToggle');
const themeText = document.getElementById('themeText');
const themeIcon = document.getElementById('themeIcon');
const searchForm = document.getElementById('searchForm');
const searchInput = document.getElementById('searchInput');
const errorMsg = document.getElementById('errorMsg');

const avatar = document.getElementById('avatar');
const mobileAvatar = document.getElementById('mobileAvatar');
const nameEl = document.getElementById('name');
const loginEl = document.getElementById('login');
const joinedDateEl = document.getElementById('joinedDate');
const bioEl = document.getElementById('bio');
const reposEl = document.getElementById('repos');
const followersEl = document.getElementById('followers');
const followingEl = document.getElementById('following');

const locationEl = document.getElementById('location');
const locationItem = document.getElementById('locationItem');
const twitterEl = document.getElementById('twitter');
const twitterItem = document.getElementById('twitterItem');
const blogEl = document.getElementById('blog');
const blogItem = document.getElementById('blogItem');
const companyEl = document.getElementById('company');
const companyItem = document.getElementById('companyItem');

const sunIcon = `<path d="M10 2.5a.75.75 0 0 1 .75.75v1.5a.75.75 0 0 1-1.5 0v-1.5A.75.75 0 0 1 10 2.5ZM10 14.5a.75.75 0 0 1 .75.75v1.5a.75.75 0 0 1-1.5 0v-1.5A.75.75 0 0 1 10 14.5ZM4.697 3.636a.75.75 0 0 1 1.06 0l1.061 1.061a.75.75 0 0 1-1.06 1.06L4.696 4.697a.75.75 0 0 1 0-1.061ZM13.182 12.121a.75.75 0 0 1 1.06 0l1.061 1.061a.75.75 0 0 1-1.06 1.06l-1.06-1.06a.75.75 0 0 1 0-1.061ZM2.5 10a.75.75 0 0 1 .75-.75h1.5a.75.75 0 0 1 0 1.5h-1.5A.75.75 0 0 1 2.5 10ZM14.5 10a.75.75 0 0 1 .75-.75h1.5a.75.75 0 0 1 0 1.5h-1.5a.75.75 0 0 1-.75-.75ZM4.697 16.364a.75.75 0 0 1 0-1.06l1.06-1.061a.75.75 0 1 1 1.061 1.06l-1.06 1.061a.75.75 0 0 1-1.061 0ZM13.182 7.879a.75.75 0 0 1 0-1.06l1.06-1.061a.75.75 0 1 1 1.061 1.06l-1.06 1.061a.75.75 0 0 1-1.061 0ZM10 6a4 4 0 1 0 0 8 4 4 0 0 0 0-8Z" />`;
const moonIcon = `<path d="M17.293 13.293A8 8 0 0 1 6.707 2.707a8.001 8.001 0 1 0 10.586 10.586Z" />`;

function formatDate(isoString) {
  const months = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];
  const date = new Date(isoString);
  const day = date.getDate();
  const month = months[date.getMonth()];
  const year = date.getFullYear();
  return `Joined ${day} ${month} ${year}`;
}

function updateLink(itemElement, textElement, value, isHref = false) {
  if (value && value.trim() !== '') {
    itemElement.classList.remove('disabled');
    textElement.textContent = value;
    if (isHref) {
      textElement.href = value.startsWith('http') ? value : `https://${value}`;
    }
  } else {
    itemElement.classList.add('disabled');
    textElement.textContent = 'Not Available';
    if (isHref) {
      textElement.removeAttribute('href');
    }
  }
}

function renderUserData(data) {
  avatar.src = data.avatar_url;
  mobileAvatar.src = data.avatar_url;
  avatar.alt = `${data.login} avatar`;
  mobileAvatar.alt = `${data.login} avatar`;

  nameEl.textContent = data.name || data.login;
  loginEl.textContent = `@${data.login}`;
  loginEl.href = data.html_url;
  joinedDateEl.textContent = formatDate(data.created_at);
  bioEl.textContent = data.bio ? data.bio : 'This profile has no bio';

  reposEl.textContent = data.public_repos;
  followersEl.textContent = data.followers;
  followingEl.textContent = data.following;

  updateLink(locationItem, locationEl, data.location);
  updateLink(twitterItem, twitterEl, data.twitter_username ? `@${data.twitter_username}` : null);
  updateLink(blogItem, blogEl, data.blog, true);
  updateLink(companyItem, companyEl, data.company);
}

async function fetchGitHubUser(username) {
  try {
    errorMsg.classList.remove('show');
    const response = await fetch(`https://api.github.com/users/${encodeURIComponent(username)}`);

    if (!response.ok) {
      errorMsg.classList.add('show');
      return;
    }

    const data = await response.json();
    renderUserData(data);
  } catch (error) {
    console.error('Qidiruvda xatolik:', error);
    errorMsg.classList.add('show');
  }
}

searchForm.addEventListener('submit', (e) => {
  e.preventDefault();
  const query = searchInput.value.trim();
  if (query) {
    fetchGitHubUser(query);
  }
});

searchInput.addEventListener('input', () => {
  if (errorMsg.classList.contains('show')) {
    errorMsg.classList.remove('show');
  }
});

function applyTheme(theme) {
  document.documentElement.setAttribute('data-theme', theme);
  if (theme === 'light') {
    themeText.textContent = 'DARK';
    themeIcon.innerHTML = moonIcon;
  } else {
    themeText.textContent = 'LIGHT';
    themeIcon.innerHTML = sunIcon;
  }
  localStorage.setItem('devfinder-theme', theme);
}

themeToggle.addEventListener('click', () => {
  const currentTheme = document.documentElement.getAttribute('data-theme');
  const newTheme = currentTheme === 'light' ? 'dark' : 'light';
  applyTheme(newTheme);
});

window.addEventListener('DOMContentLoaded', () => {
  const savedTheme = localStorage.getItem('devfinder-theme') || 'dark';
  applyTheme(savedTheme);
  
  fetchGitHubUser('octocat');
});