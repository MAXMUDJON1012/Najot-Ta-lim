// #include <stdio.h>
// int main(){
//     int a,b,i;
//     scanf("%d  %d",&a,&b);
//     for (i=a;i<=b;i++){
//         printf("%d",i);
//     }   
// }



// TASK12
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float a, b, c, D, x1, x2;
//     printf("3 ta son kiriting: ");
//     scanf("%f %f %f", &a, &b, &c);
//     D = b * b - 4 * a * c;
//     if (D > 0) {
//         x1 =(-b + sqrt(D)) / (2 * a);
//         x2 =(-b - sqrt(D)) / (2 * a);

//         printf("x1 = %.2f\n", x1);
//         printf("x2 = %.2f", x2);
//     }
//     else if (D == 0) {
//         x1 = -b / (2 * a);

//         printf("x1 = x2 = %.2f", x1);
//     }
//     else {
//         printf("Yechimga ega emas");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("N ni kiritng: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//            if(j==i || j+i==n+1){
//                printf(" 1 ");
//            }
//            else if(j<=i){
//                printf(" 1 ");
//            }
//            else if(j+i<=n+1){
//                printf(" 1 ");
//            }
//            else{
//                printf(" 0 ");
//            }
//         }
//         printf("\n");
//     }
// }





                                                                          // VOID





// #include <stdio.h>
// void tanishtiruv (){
//     int yosh;
//     scanf("%d",&yosh);
//     if (yosh>18){
//         printf("assalomu alayku Morgan tizimga xush kelibsiz");
//     }
//     else if (yosh<18){
//         printf("uzur Morgan siz tizimga kira olmaysiz!KATTA BO'LIB KELIN ");
//     };
// }
// int main(){
//     tanishtiruv();
// }










// #include <stdio.h>
// void kichigini_top(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a > b){
//         printf("%d soni kichik", b);
//     }
//     else{
//         printf("%d soni kichik", a);
//     }
// }
// int main(){
//     kichigini_top();
//     return 0;
// }






// #include <stdio.h>
// double daraja (double son, int n){
//     double natija = 1.0;
//     for (int i = 1; i <= n; i++){
//         natija *= son;
//     }
//     return natija;
// }

// int main(){
//     printf("%lf\n", daraja(3, 2));
//     return 0;
// }





// // task1
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
// }



//  // task2
// #include <stdio.h>

// int kattasini_top(int a, int b, int c){
//      if (a > b && a > c) {
//         return a;
//     }
//     else if (b > a && b > c) {
//         return b;
//     }
//     else {
//         return c;
//     }
// }
// int main(){
//     int a, b, c;
//     printf("ENTER NUMBERS: ");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("kattasi %d",kattasini_top(a, b, c));
//     return 0;
// }




// // task3
// #include <stdio.h>
// double aylana_yuzi(double r){
//     double  p=3.14,s;
//     s=p*r*r;
//     return s;
// }
// int main(){
//     int r;
//     printf("enter number!");
//     scanf("%d",&r);
//     printf("Yuzasi %lf", aylana_yuzi(r));
//     return 0;
// }


// // task4
// #include <stdio.h>
// int tortburchak_yuzi(int a, int b){
//     int s = a * b;
//     return s;
// }
// int main(){
//     int a, b;
//     printf("enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("Yuzasi: %d\n", tortburchak_yuzi(a, b));
//     return 0;
// }














