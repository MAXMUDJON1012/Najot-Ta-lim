// import { users } from "./data.js";

// function addUser(arr, name, lastname, age, job, email, password) {
//   let newUser = {
//     id: users.length === 0 ? 1 : users.at(-1).id + 1,
//     name,
//     lastname,
//     age,
//     job,
//     email,
//     password,
//   };

//   return newUser;
// }

// console.log(
//   addUser(
//     users,
//     "john doe",
//     "macgregor",
//     34,
//     "boxer",
//     "johndoe@gmail.com",
//     "1234",
//   ),
// );

// 101
function yigindi(n) {
  let jami = 0;
  for (let i = 1; i <= n; i++) {
    jami += i;
  }
  return jami;
}

console.log(yigindi(3));
console.log(yigindi(10));
console.log(yigindi(7));

// 102
function oraliqda(son, obj) {
  return son >= obj.min && son <= obj.max;
}

console.log(oraliqda(4, { min: 0, max: 5 }));
console.log(oraliqda(4, { min: 4, max: 5 }));
console.log(oraliqda(4, { min: 6, max: 10 }));
console.log(oraliqda(5, { min: 5, max: 5 }));

// 103
function oxiriTeng(son) {
  let kvadrat = String(son ** 2);
  return kvadrat.endsWith(String(son));
}

console.log(oxiriTeng(1));
console.log(oxiriTeng(3));
console.log(oxiriTeng(6));
console.log(oxiriTeng(95));

// 104
function indeksQoshish(arr) {
  return arr.map((son, i) => son + i);
}

console.log(indeksQoshish([0, 0, 0, 0, 0]));
console.log(indeksQoshish([1, 2, 3, 4, 5]));
console.log(indeksQoshish([5, 4, 3, 2, 1]));

// 105
function shakarsiz(ichimliklar) {
  return ichimliklar.filter((nomi) => nomi !== "cola" && nomi !== "fanta");
}

console.log(shakarsiz(["fanta", "cola", "water"]));
console.log(shakarsiz(["fanta", "cola"]));
console.log(shakarsiz(["lemonade", "beer", "water"]));

// 106
function raqamlarSoni(son) {
  return String(Math.abs(son)).length;
}

console.log(raqamlarSoni(123));
console.log(raqamlarSoni(56));
console.log(raqamlarSoni(7154));
console.log(raqamlarSoni(61217311514));
console.log(raqamlarSoni(0));

// 107
function engKattaSon(son) {
  let saralangan = String(son)
    .split("")
    .sort((a, b) => b - a)
    .join("");
  return Number(saralangan);
}

console.log(engKattaSon(123));
console.log(engKattaSon("001"));
console.log(engKattaSon(999));
console.log(engKattaSon(784));

// 108
function tasodifiySon(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

console.log(tasodifiySon(5, 9));
console.log(tasodifiySon(5, 9));
console.log(tasodifiySon(5, 9));

// 109
function narsistikSon(son) {
  let matn = String(son);
  let daraja = matn.length;
  let jami = 0;

  for (let i = 0; i < daraja; i++) {
    jami += Number(matn[i]) ** daraja;
  }

  return jami === son;
}

console.log(narsistikSon(153));
console.log(narsistikSon(370));
console.log(narsistikSon(1652));

// 110
function kattaHarflar(matn) {
  let soni = 0;
  for (let i = 0; i < matn.length; i++) {
    if (matn[i] >= "A" && matn[i] <= "Z") {
      soni++;
    }
  }
  return soni;
}

console.log(kattaHarflar("fvLzpxmgXSDrobbgMVrc"));
console.log(kattaHarflar("JMZWCneOTFLWYwBWxyFw"));
console.log(kattaHarflar("mqeytbbjwqemcdrdsyvq"));
