// 1
function sum(x, y) {
  return x + y;
}

console.log(sum(3, 2));

// 2
function toSekunds(minutes) {
  return minutes * 60;
}

console.log(toSekunds(5));

// 3
function nextInteger(int) {
  return int + 1;
}

console.log(nextInteger(0));

// 4
function uchburchakYuzi(asos, balandlik) {
  return (asos * balandlik) / 2;
}

console.log(uchburchakYuzi(3, 2));

// 5
function ageToDays(age) {
  return age * 365;
}

console.log(ageToDays(65));

// 6
function kub(son) {
  return son ** 3;
}

console.log(kub(3));

// 7
function firstElement(arr) {
  return arr[0];
}

console.log(firstElement([1, 2, 3]));

// 8
function power(x, y) {
  return x * y;
}

console.log(power(230, 10));

// 9
function hourToSekunds(hour) {
  return hour * 3600;
}

console.log(hourToSekunds(2));

// 10
function uchinchiTomon(tomon1, tomon2) {
  return tomon1 + tomon2 - 1;
}

console.log(uchinchiTomon(8, 10));

// 11
function qoldiq(son1, son2) {
  return son1 % son2;
}

console.log(qoldiq(1, 3));

// 12
function turtburchakYuzi(boyi, eni) {
  return (boyi + eni) * 2;
}

console.log(turtburchakYuzi(6, 7));

// 13
function stringQoshish(a) {
  return "something " + a;
}

console.log(stringQoshish("is better than nothing"));

// 14
function kvadrat(son) {
  return son * son;
}

console.log(kvadrat(5));

// 15
function noldan(raqam) {
  return raqam <= 0;
}

console.log(noldan(5));

// 16
function ichkiBurchaklar(n) {
  return (n - 2) * 180;
}

console.log(ichkiBurchaklar(3));

// 17
function ochkolar(x, y) {
  return x * 2 + y * 3;
}

console.log(ochkolar(1, 1));

// 18
function nameString(name) {
  return name + "Edabit";
}

console.log(nameString("Mubashir"));

// 19
function ikkitaSon(x, y) {
  return x + y < 100;
}

console.log(ikkitaSon(22, 15));

// 20
function printArray(n) {
  let arr = [];
  for (let i = 1; i <= n; i++) {
    arr.push(i);
  }
  return arr;
}

console.log(printArray(3));
