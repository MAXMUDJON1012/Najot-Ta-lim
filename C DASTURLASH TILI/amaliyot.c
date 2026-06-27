// # include <stdio.h>
// int main(){
//     int kun;
//     scanf("%d",&kun);
//     switch( kun){
//         case 1:
//             printf("Dushanba");
//             break;
//         case 2:
//             printf("Seshanba");
//             break;
//         case 3:
//             printf("Chorshanba");
//             break;
//         case 4:
//             printf("Payshanba");
//             break;
//         case 5:
//             printf("Juma");
//             break;
//         case 6:
//             printf("shanba");
//             break;
//         case 7:
//             printf("Yashanba");
//             break;
//         default:
//         printf("Bunday xafta kuni mavjud emas");
//     }
//     return 0;
// }




// # include <stdio.h>
// int main(){
//     int oy;
//     scanf("%d",&oy);
//     switch( oy){
//         case 1:
//             printf("yanvar oyi 31 kundan iborat");
//             break;
//         case 2:
//             printf("fevral 28 kundan iborat");
//             break;
//         case 3:
//             printf("mart oyi 31 kundan iborat");
//             break;
//         case 4:
//             printf("aprel oyi 30 kundan iborat");
//             break;
//         case 5:
//             printf("may oyi 31 kundan iborat");
//             break;
//         case 6:
//             printf("iyun oyi 30 kundan iborat");
//             break;
//         case 7:
//             printf("iyul oyyi 31 kundan iborat");
//             break;
//          case 8:
//             printf("avgust oyi 31 kundan iborat");
//             break;
//         case 9:
//             printf("sentabr yi 30 kundan iborat");
//             break;
//         case 10:
//             printf("octabr oyi 31 kundan iborat");
//             break;
//         case 11:
//             printf("noyabr oy yi 30 kundan iborat");
//             break;
//         case 12:
//             printf("Dekabir oy 31 kundan iborat");
//             break;
//         default:
//         printf("Bunday oy  mavjud emas");
//     }
//     return 0;
// }






// # include <stdio.h>
// int main(){
//     int ball;
//     scanf("%d",&ball);
//     switch( ball){
//         case 1:
//             printf("yomon");
//             break;
//         case 2:
//             printf("qoniqarsiz");
//             break;
//         case 3:
//             printf("qoniqarli");
//             break;
//         case 4:
//             printf("ayaxshi");
//             break;
//         case 5:
//             printf("a'lo");
//             break;
//         default:
//         printf("Bunday baho  mavjud emas");
//     }
// }








// #include <stdio.h>
// int main(){
//     int oy;
//     printf("oy raqamini kirgazing!");
//     scanf("%d",&oy);
//     switch (oy){
//         case 11:
//         case 12:
//         case 1:
//             printf("qish faslining oylari");
//             break;
//         case 2:
//         case 3:
//         case 4:
//             printf("Baxor faslining oylari");
//             break;
//         case 5:
//         case 6:
//         case 7:
//             printf("yoz faslining oylari");
//             break;
//         case 8:
//         case 9:
//         case 10:
//             printf("kuz faslining oylari");
//             break;
//         default:
//             printf("Bunday oy   mavjud emas");
//     }
//     return 0;
// }





// # include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     switch(c){
//         case 1:
//             printf("%d",a+b);
//             break;
//         case 2:
//             printf("%d",a-b);
//             break;
//         case 3:
//             printf("%d", a/b);
//             break;
//         case 4:
//             printf("%d",a*b);
//             break;
//         default:
//         printf("Bunday baho  mavjud emas");
//     }
// }


// 
// int main(){
//     int parol , urinish=0;
//     qayta:
//     printf("parolini kiriting: ");
//     scanf("%d",&parol);
//     if (parol==1234){
//         printf("to'g'ri");
//     }
//     else{
//         printf("noto'g'ri parol \n");
//         urinish++;
//         if (urinish<3){
//             goto qayta;
//         }
//         printf("urunishlar soni oshib ketdi");
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int number;
//     comeback:
//     printf("1-5 oraliqdan son kiriting: ");
//     scanf("%d", &number);
    
//     if(number >= 1 && number <= 5){
//         printf("%lf", pow(number, 2)); 
//     }
//     else{
//         goto comeback;
//     }
//     return 0;
// }
//  #include <stdio.h>

//  #include <math.h>
//  int main (){
//     int a,b,yigindi=0;
//     scanf("%d %d",&a,&b);
//     qaytar :
//     if ( a%2==0){
//         printf("%d",a);
//         yigindi+=a;
//     }
//     a++;
//     if (a<=b){
//         goto qaytar ;
//     }
//     printf ("\n natija: %d",yigindi);
//     return 0
//  }





// ########################################################################################################################################

// #include <stdio.h>
// int main(){
//     int a=1;
//     while (a<=100){
//         if (a%2==0){
//             printf("%d\n",a);
//         }
//         a+=1;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float a,b;
//     scanf("%f  %f,a,b");
//     while (a<=b){
//         a-=b;
//         printf():
//     }
// }



// #include <stdio.h>
// int main() {
//     int finish, step = 0, start = 1;
//     scanf("%d", &finish);
//     while (start < finish) {
//         start += start; 
//         step++;
//     }
//     printf("%d", step);
//     return 0;
// }















