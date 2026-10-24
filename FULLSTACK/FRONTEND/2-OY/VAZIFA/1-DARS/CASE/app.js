// let k = +prompt("Bahoni kiriting (1-5): ");

// switch (k) {
//   case 1:
//     console.log("yomon");
//     break;
//   case 2:
//     console.log("qoniqarsiz");
//     break;
//   case 3:
//     console.log("qoniqarli");
//     break;
//   case 4:
//     console.log("yaxshi");
//     break;
//   case 5:
//     console.log("a'lo");
//     break;
//   default:
//     console.log("xato");
// }




// T2
// let k = +prompt("Bahoni kiriting (1-5): ");

// switch (k) {
//   case 1:
//     console.log("yomon");
//     break;
//   case 2:
//     console.log("qoniqarsiz");
//     break;
//   case 3:
//     console.log("qoniqarli");
//     break;
//   case 4:
//     console.log("yaxshi");
//     break;
//   case 5:
//     console.log("a'lo");
//     break;
//   default:
//     console.log("xato");
// }




// T3
// let oy = +prompt("Oy raqamini kiriting (1-12): ");

// switch (oy) {
//   case 2:
//     console.log(28);
//     break;
//   case 4:
//   case 6:
//   case 9:
//   case 11:
//     console.log(30);
//     break;
//   case 1:
//   case 3:
//   case 5:
//   case 7:
//   case 8:
//   case 10:
//   case 12:
//     console.log(31);
//     break;
//   default:
//     console.log("xato oy raqami");
// }







// T4
// let birlik = +prompt("Birlikni tanlang (1-dm, 2-km, 3-m, 4-mm, 5-sm): ");
// let kesma = +prompt("Kesma uzunligini kiriting: ");

// switch (birlik) {
//   case 1:
//     console.log(kesma * 0.1 + " metr");
//     break;
//   case 2:
//     console.log(kesma * 1000 + " metr");
//     break;
//   case 3:
//     console.log(kesma + " metr");
//     break;
//   case 4:
//     console.log(kesma * 0.001 + " metr");
//     break;
//   case 5:
//     console.log(kesma * 0.01 + " metr");
//     break;
//   default:
//     console.log("xato birlik kiritildi");
// }




// T5
// let birlik = +prompt("Birlikni tanlang (1-kg, 2-mg, 3-g, 4-t, 5-ts): ");
// let ogirlik = +prompt("Og'irlik qiymatini kiriting: ");

// switch (birlik) {
//   case 1:
//     console.log(ogirlik + " kg");
//     break;
//   case 2:
//     console.log(ogirlik * 0.000001 + " kg");
//     break;
//   case 3:
//     console.log(ogirlik * 0.001 + " kg");
//     break;
//   case 4:
//     console.log(ogirlik * 1000 + " kg");
//     break;
//   case 5:
//     console.log(ogirlik * 100 + " kg");
//     break;
//   default:
//     console.log("xato birlik kiritildi");
// }




// T6
// let d = +prompt("Kunni kiriting: ");
// let m = +prompt("Oy raqamini kiriting (1-12): ");
// let oyNomi = "";

// switch (m) {
//   case 1: oyNomi = "yanvar"; break;
//   case 2: oyNomi = "fevral"; break;
//   case 3: oyNomi = "mart"; break;
//   case 4: oyNomi = "aprel"; break;
//   case 5: oyNomi = "may"; break;
//   case 6: oyNomi = "iyun"; break;
//   case 7: oyNomi = "iyul"; break;
//   case 8: oyNomi = "avgust"; break;
//   case 9: oyNomi = "sentabr"; break;
//   case 10: oyNomi = "oktabr"; break;
//   case 11: oyNomi = "noyabr"; break;
//   case 12: oyNomi = "dekabr"; break;
//   default: oyNomi = "xato oy";
// }

// console.log(d + "-" + oyNomi);



// T7
// let d = +prompt("Kunni kiriting: ");
// let m = +prompt("Oy raqamini kiriting: ");
// let oxirgiKun = 31;

// switch (m) {
//   case 2:
//     oxirgiKun = 28;
//     break;
//   case 4:
//   case 6:
//   case 9:
//   case 11:
//     oxirgiKun = 30;
//     break;
// }

// d = d + 1;
// if (d > oxirgiKun) {
//   d = 1;
//   m = m + 1;
//   if (m > 12) {
//     m = 1;
//   }
// }

// console.log(d + "-kun, " + m + "-oy");







// T8
// let y = prompt("Boshlang'ich yo'nalishni kiriting (s, j, q, g): ");
// let k = +prompt("Komandani kiriting (0-davom, 1-chapga, 2-o'ngga): ");

// switch (k) {
//   case 0:
//     break;
//   case 1:
//     switch (y) {
//       case "s": y = "g"; break;
//       case "g": y = "j"; break;
//       case "j": y = "q"; break;
//       case "q": y = "s"; break;
//     }
//     break;
//   case 2:
//     switch (y) {
//       case "s": y = "q"; break;
//       case "q": y = "j"; break;
//       case "j": y = "g"; break;
//       case "g": y = "s"; break;
//     }
//     break;
// }

// console.log("Hozirgi yo'nalish: " + y);








// T9
// let n = +prompt("Karta qiymatini kiriting (6-14): ");
// let m = +prompt("Karta turini kiriting (1-4): ");
// let nomi = "";
// let turi = "";

// switch (n) {
//   case 6: nomi = "olti"; break;
//   case 7: nomi = "yetti"; break;
//   case 8: nomi = "sakkiz"; break;
//   case 9: nomi = "to'qqiz"; break;
//   case 10: nomi = "o'n"; break;
//   case 11: nomi = "valet"; break;
//   case 12: nomi = "dama"; break;
//   case 13: nomi = "qirol"; break;
//   case 14: nomi = "tuz"; break;
// }

// switch (m) {
//   case 1: turi = "g'isht"; break;
//   case 2: turi = "olma"; break;
//   case 3: turi = "chillak"; break;
//   case 4: turi = "qarg'a"; break;
// }

// console.log(nomi + " " + turi);








// T10
// let son = +prompt("Masalalar sonini kiriting (10-40): ");

// if (son >= 10 && son <= 40) {
//   let birlik = son % 10;
//   let onlik = (son - birlik) / 10;
//   let natija = "";

//   switch (onlik) {
//     case 1: natija = "o'n"; break;
//     case 2: natija = "yigirma"; break;
//     case 3: natija = "o'ttiz"; break;
//     case 4: natija = "qirq"; break;
//   }

//   switch (birlik) {
//     case 0: break;
//     case 1: natija += " bir"; break;
//     case 2: natija += " ikki"; break;
//     case 3: natija += " uch"; break;
//     case 4: natija += " to'rt"; break;
//     case 5: natija += " besh"; break;
//     case 6: natija += " olti"; break;
//     case 7: natija += " yetti"; break;
//     case 8: natija += " sakkiz"; break;
//     case 9: natija += " to'qqiz"; break;
//   }

//   natija += "ta masala";
//   console.log(natija);
// } else {
//   console.log("10 va 40 oralig'ida kiriting");
// }











