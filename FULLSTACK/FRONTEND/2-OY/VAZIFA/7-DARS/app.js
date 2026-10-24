// // 31 va 35 misollarda muommo chiqgandi array va function ekan

// // 21
// {
//   let tovuq = 2;
//   let qoy = 3;
//   let sigir = 5;
//   let jami = tovuq * 2 + qoy * 4 + sigir * 4;
//   console.log(jami);
// }

// // 22
// {
//   let a = true;
//   let b = false;
//   let natija = a && b;
//   console.log(natija);
// }

// // 23
// {
//   let a = 2;
//   let b = 2;
//   let natija = a === b;
//   console.log(natija);
// }

// // 24
// {
//   let yutish = 3;
//   let durang = 4;
//   let maglubiyat = 2;
//   let ochko = yutish * 3 + durang * 1 + maglubiyat * 0;
//   console.log(ochko);
// }

// // 25
// {
//   let soat = 1;
//   let minut = 3;
//   let sekund = soat * 3600 + minut * 60;
//   console.log(sekund);
// }

// // 26
// {
//   let son = 7;
//   let natija = false;
//   if (son == 7) {
//     natija = true;
//   }
//   console.log(natija);
// }

// // 27
// {
//   let a = 1;
//   let b = true;
//   let natija = a === b;
//   console.log(natija);
// }

// // 28
// {
//   let rostlik = true;
//   let matn = "" + rostlik;
//   console.log(matn);
// }

// // 29
// {
//   let qiymat = 3;
//   console.log(qiymat);
// }

// // 30
// {
//   let minut = 10;
//   let frame = 25;
//   let jamiFrame = minut * 60 * frame;
//   console.log(jamiFrame);
// }

// // 32
// {
//   let a = 9;
//   let b = 10;
//   let natija = false;
//   if (a == 10 || b == 10 || a + b == 10) {
//     natija = true;
//   }
//   console.log(natija);
// }

// // 33
// {
//   let masofa = 15;
//   let sarf = masofa * 10;
//   if (sarf < 100) {
//     sarf = 100;
//   }
//   console.log(sarf);
// }

// // 34
// {
//   let a = 3;
//   let b = 7;
//   let katta = a;
//   if (b > a) {
//     katta = b;
//   }
//   console.log(katta);
// }

// // 36
// {
//   let word1 = "AB";
//   let word2 = "CD";
//   let tenglik = false;
//   if (word1.length == word2.length) {
//     tenglik = true;
//   }
//   console.log(tenglik);
// }

// // 37
// {
//   let matn = "";
//   let boshmi = false;
//   if (matn == "") {
//     boshmi = true;
//   }
//   console.log(boshmi);
// }

// // 38
// {
//   let son = 5;
//   let bolinadimi = false;
//   if (son % 5 == 0) {
//     bolinadimi = true;
//   }
//   console.log(bolinadimi);
// }

// // 39
// {
//   let son = 1000;
//   let bolinadimi = false;
//   if (son % 100 == 0) {
//     bolinadimi = true;
//   }
//   console.log(bolinadimi);
}

// 40
{
  let matn = "apple";
  let sanovchi = 0;
  function hisobla(s) {
    if (s == "") {
      return 0;
    }
    return 1 + hisobla(s.slice(1));
  }
  sanovchi = hisobla(matn);
  console.log(sanovchi);
}
