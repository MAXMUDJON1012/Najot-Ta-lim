// 1
let user1 = {
  firstName: " aSaDbEk ",
  lastName: " aBDULHAMIDOV ",
  email: " ASADBEK@GMAIL.COM ",
  username: " asadbek_dev ",
};

let cleanFirstName = user1.firstName.trim();
let cleanLastName = user1.lastName.trim();
let firstName =
  cleanFirstName[0].toUpperCase() + cleanFirstName.slice(1).toLowerCase();
let lastName =
  cleanLastName[0].toUpperCase() + cleanLastName.slice(1).toLowerCase();

let email1 = user1.email.trim().toLowerCase();
let username1 = user1.username.trim().toLowerCase();

let isEmailValid1 = email1.includes("@") && email1.endsWith(".com");
let isUsernameValid1 = username1.length >= 5;

console.log("Ism: " + firstName);
console.log("Familiya: " + lastName);
console.log("Email: " + email1);
console.log("Username: " + username1);

if (isEmailValid1 && isUsernameValid1) {
  console.log("Holat: muvaffaqiyatli ro‘yxatdan o‘tdi");
} else {
  console.log("Holat: xatolik yuz berdi");
  if (!isEmailValid1) {
    console.log("Xatolik: Email noto'g'ri kiritilgan");
  }
  if (!isUsernameValid1) {
    console.log("Xatolik: Username kamida 5 ta belgidan iborat bo'lishi kerak");
  }
}

// 2
let user2 = {
  name: " mALiKa ",
  email: " MALIKA@EXAMPLE.COM ",
  phone: " +998 90 123 45 67 ",
  password: " Malika2026 ",
};

let cleanName = user2.name.trim();
let name2 = cleanName[0].toUpperCase() + cleanName.slice(1).toLowerCase();

let email2 = user2.email.trim().toLowerCase();
let isEmailValid2 = email2.includes("@") && email2.endsWith(".com");

let phone2 = user2.phone.trim();
let isPhoneValid2 = phone2.slice(0, 4) === "+998";

let password2 = user2.password.trim();
let isPasswordValid2 = password2.length >= 8;

console.log("Ism: " + name2);
console.log("Email: " + email2);
console.log("Telefon: " + phone2);
console.log("Parol uzunligi: " + password2.length);

if (!isEmailValid2) {
  console.log("Tekshiruv xatosi: Email noto'g'ri");
}
if (!isPhoneValid2) {
  console.log("Tekshiruv xatosi: Telefon raqam +998 bilan boshlanishi kerak");
}
if (!isPasswordValid2) {
  console.log(
    "Tekshiruv xatosi: Parol kamida 8 ta belgidan iborat bo'lishi kerak",
  );
}

if (isEmailValid2 && isPhoneValid2 && isPasswordValid2) {
  console.log("Holat: ma’lumotlar qabul qilindi");
} else {
  console.log("Holat: ma’lumotlar qabul qilinmadi");
}

// 3
let product = {
  name: " wIRELESS HEADPHONES ",
  category: " ELECTRONICS ",
  description: " Bluetooth headphones with noise cancellation ",
  code: " WH-2026 ",
};

let cleanProdName = product.name.trim();
let prodName =
  cleanProdName[0].toUpperCase() + cleanProdName.slice(1).toLowerCase();

let category = product.category.trim().toUpperCase();

let description = product.description.trim();
let isDescLengthValid = description.length >= 20;
let hasBluetooth = description.toLowerCase().includes("bluetooth");

let code = product.code.trim();
let isCodeValid = code.slice(0, 3) === "WH-";

console.log("Mahsulot: " + prodName);
console.log("Kategoriya: " + category);
console.log("Kod: " + code);

if (isDescLengthValid && hasBluetooth && isCodeValid) {
  console.log("Holat: tekshiruvdan o‘tdi");
} else {
  console.log("Holat: to‘liq emas");
}

// 4
let message = {
  sender: " sARDOR ",
  subject: " PAYMENT ISSUE ",
  text: " I cannot complete my payment. Please help! ",
  email: " SARDOR@MAIL.COM ",
};

let cleanSender = message.sender.trim();
let sender = cleanSender[0].toUpperCase() + cleanSender.slice(1).toLowerCase();

let subject = message.subject.trim().toLowerCase();

let text = message.text.trim();
let isTextLenValid = text.length >= 20;
let hasPayment = text.toLowerCase().includes("payment");

let email4 = message.email.trim().toLowerCase();
let hasAt = email4.includes("@");

console.log("Yuboruvchi: " + sender);
console.log("Mavzu: " + subject);
console.log("Email: " + email4);

if (isTextLenValid && hasPayment && hasAt) {
  console.log("Holat: murojaat qabul qilindi");
} else {
  console.log("Holat: xatolik bor");
}

// 5
let profile = {
  fullName: " dILSHOD kARIMOV ",
  email: " DILSHOD@GMAIL.COM ",
  username: " dilshod_uz ",
  city: " tOSHKENT ",
  website: " https://dilshod.uz ",
};

let cleanFullName = profile.fullName.trim();
let spaceIndex = cleanFullName.indexOf(" ");

let firstNamePart = cleanFullName.slice(0, spaceIndex);
let lastNamePart = cleanFullName.slice(spaceIndex + 1);

let formattedFirstName =
  firstNamePart[0].toUpperCase() + firstNamePart.slice(1).toLowerCase();
let formattedLastName =
  lastNamePart[0].toUpperCase() + lastNamePart.slice(1).toLowerCase();
let fullName = formattedFirstName + " " + formattedLastName;

let email5 = profile.email.trim().toLowerCase();
let username5 = profile.username.trim().toLowerCase();

let isEmailValid5 = email5.includes("@") && email5.endsWith(".com");
let isUsernameValid5 = username5.length >= 6;

let cleanCity = profile.city.trim();
let city = cleanCity[0].toUpperCase() + cleanCity.slice(1).toLowerCase();

let cleanWebsite = profile.website.trim();
let isWebsiteValid = cleanWebsite.slice(0, 8) === "https://";

console.log("F.I.Sh.: " + fullName);
console.log("Email: " + email5);
console.log("Username: " + username5);
console.log("Shahar: " + city);
console.log("Website: " + cleanWebsite);

if (isEmailValid5 && isUsernameValid5 && isWebsiteValid) {
  console.log("Holat: profil tasdiqlandi");
} else {
  console.log("Holat: profil tasdiqlanmadi");
  if (!isEmailValid5) {
    console.log(
      "Bajarilmagan talab: Email @ belgisi va .com bilan tugashi kerak",
    );
  }
  if (!isUsernameValid5) {
    console.log(
      "Bajarilmagan talab: Username kamida 6 ta belgi bo'lishi kerak",
    );
  }
  if (!isWebsiteValid) {
    console.log("Bajarilmagan talab: Website https:// bilan boshlanishi kerak");
  }
}
