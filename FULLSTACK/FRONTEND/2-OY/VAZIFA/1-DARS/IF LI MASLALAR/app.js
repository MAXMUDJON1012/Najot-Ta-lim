                                                        // if li masalara 
// // if1
// let a = 5;
// if (a > 0) {
//   a = a + 1;
// }
// console.log(a);

// // if2
// let a = -4;
// if (a > 0) {
//   a = a + 1;
// } else if (a < 0) {
//   a = a - 2;
// } else {
//   a = 10;
// }
// console.log(a);

// // if3
// let a = 3;
// let b = -2;
// let c = 7;
// let soni = 0;
// if (a > 0) {
//   soni = soni + 1;
// }
// if (b > 0) {
//   soni = soni + 1;
// }
// if (c > 0) {
//   soni = soni + 1;
// }
// console.log(soni);

// // if4
// let a = 12;
// let b = 25;
// if (a > b) {
//   console.log(a);
// } else {
//   console.log(b);
// }

// // if5
// let a = 15;
// let b = 8;
// if (a < b) {
//   console.log(1);
// } else {
//   console.log(2);
// }

// // if6
// let a = 9;
// let b = 14;
// if (a > b) {
//   console.log(a, b);
// } else {
//   console.log(b, a);
// }

// // if7
// let a = 18;
// let b = 5;
// if (a > b) {
//   let temp = a;
//   a = b;
//   b = temp;
// }
// console.log(a, b);

// // if8
// let a = 7;
// let b = 4;
// if (a == b) {
//   a = 0;
//   b = 0;
// } else {
//   let yigindi = a + b;
//   a = yigindi;
//   b = yigindi;
// }
// console.log(a, b);

// if9
// let a = 9;
// let b = 13;
// if (a == b) {
//   a = 0;
//   b = 0;
// } else if (a > b) {
//   b = a;
// } else {
//   a = b;
// }
// console.log(a, b);

// // if10
// let a = 14;
// let b = 6;
// let c = 9;
// let min = a;
// if (b < min) {
//   min = b;
// }
// if (c < min) {
//   min = c;
// }
// console.log(min);

// // if11
// let a = 10;
// let b = 5;
// let c = 20;
// if ((a >= b && a <= c) || (a <= b && a >= c)) {
//   console.log(a);
// } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
//   console.log(b);
// } else {
//   console.log(c);
// }

// // if12
// let a = 12;
// let b = 4;
// let c = 19;
// if (a + b >= a + c && a + b >= b + c) {
//   console.log(a, b);
// } else if (a + c >= a + b && a + c >= b + c) {
//   console.log(a, c);
// } else {
//   console.log(b, c);
// }

// // if13
// let a = 2;
// let b = 5;
// let c = 9;
// if (a < b && b < c) {
//   a = a * 2;
//   b = b * 2;
//   c = c * 2;
// } else {
//   a = 0 - a;
//   b = 0 - b;
//   c = 0 - c;
// }
// console.log(a, b, c);

// // if14
// let a = 10;
// let b = 7;
// let c = 3;
// if ((a < b && b < c) || (a > b && b > c)) {
//   a = a * 2;
//   b = b * 2;
//   c = c * 2;
// } else {
//   a = 0 - a;
//   b = 0 - b;
//   c = 0 - c;
// }
// console.log(a, b, c);

// // if15
// let a = 5;
// let b = 5;
// let c = 5;
// let d = 9;
// if (b == c && c == d) {
//   console.log(1);
// } else if (a == c && c == d) {
//   console.log(2);
// } else if (a == b && b == d) {
//   console.log(3);
// } else {
//   console.log(4);
// }

// // if16
// let x = 1.5;
// if (x <= 0) {
//   console.log(0 - x);
// } else if (x < 2) {
//   console.log(x * x);
// } else {
//   console.log(4);
// }

// // if17
// let yil = 2024;
// if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) {
//   console.log(366);
// } else {
//   console.log(365);
// }

// if18
// let son = 48;
// if (son >= 1 && son <= 9) {
//   if (son % 2 == 0) {
//     console.log("bir xonali juft son");
//   } else {
//     console.log("bir xonali toq son");
//   }
// } else if (son >= 10 && son <= 99) {
//   if (son % 2 == 0) {
//     console.log("ikki xonali juft son");
//   } else {
//     console.log("ikki xonali toq son");
//   }
// } else if (son >= 100 && son <= 999) {
//   if (son % 2 == 0) {
//     console.log("uch xonali juft son");
//   } else {
//     console.log("uch xonali toq son");
//   }
// }


let yosh = +prompt("yoshizni kiritig! ");

if (yosh >= 20 && yosh <= 69) {
    let birlik = yosh % 10;
    let onlik = (yosh - birlik) / 10;
    let natija = "";

    switch (onlik) {
        case 2:
            natija = "yigirma";
            break;
        case 3:
            natija = "o'tiz";
            break;
        case 4:
            natija = "qirq";
            break;
        case 5:
            natija = "ellik";
            break;
        case 6:
            natija = "oltmish";
            break;
    }

    switch (birlik) {
        case 0:
            break;
        case 1:
            natija += " bir";
            break;
        case 2:
            natija += " ikki";
            break;
        case 3:
            natija += " uch";
            break;
        case 4:
            natija += " to'rt";
            break;
        case 5:
            natija += " besh";
            break;
        case 6:
            natija += " olti";
            break;
        case 7:
            natija += " yetti";
            break;
        case 8:
            natija += " sakkiz";
            break;
        case 9:
            natija += " to'qqiz";
            break;
    }

    natija += " yosh";
    console.log(natija);
} 
else {
    console.log("20 va 69 oralig'ida kirgazing");
}