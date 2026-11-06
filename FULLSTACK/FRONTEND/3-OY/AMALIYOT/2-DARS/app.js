const p = document.getElementById("p");

function rdm(max) {
  let random1 = Math.random() * max;
  return Math.trunc(random1);
}

function getRandomRGBColor(max, n = 3) {
  let rgb = [];
  for (let i = 1; i <= n; i++) {
    rgb.push(rdm(max));
  }
  p.style.backgroundColor = `rgb(${rgb.join(",")})`;
  p.textContent = `rgb(${rgb.join(",")})`;
  document.body.style.backgroundColor = `rgb(${rgb.join(",")})`;
}

// console.log(getRandomRGBColor(255));

// const

// console.log(getRandomRGBColor(0, 255));

// function getRandomhexColor(){
// let ranglar = "1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,"
// }
