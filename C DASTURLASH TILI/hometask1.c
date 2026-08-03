// 1 task
#include <stdio.h>

int main(){
    int a,b,c,V,S;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    S=2*(a*b+b*c+a*c);
    V=a*b*c;
    printf("S=%d V=%d\n", S, V);
    return 0;
}

// //2 task
// #include <stdio.h>
// int main() {
//     float L, S, R;

//     printf("Enter R: ");
//     scanf("%f", &R);

//     L = 2 * 3.14f * R;
//     S = 3.14f * R * R;

//     printf("L = %.2f\n", L);
//     printf("S = %.2f\n", S);

//     return 0;
// }


// // 3 task
// #include <stdio.h>
// int main(){
//     float a,b,Orta_a;
//     printf("Enter two numbers: ");
//     scanf("%f", &a);
//     scanf("%f", &b);
//     Orta_a = (a + b) / 2;
//     printf("Orta_a=%f \n",Orta_a);
//     return 0;
// }


// // 4 task
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double a,b,ildiz;
//     printf("Enter two number!");
//     scanf("%lf %lf",&a,&b);
//     ildiz=sqrt(a*b);
//     printf("ildiz=%lf \n",ildiz);
//     return 0;
// }


// // 5 task
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double a,b;
//     printf("Enter two numbers");
//     scanf("%lf %lf",&a,&b);
//     printf("%lf %lf %lf %lf",
//         pow(a,2),
//         a+b,
//         pow(b,2),
//         a*b);
//     return 0;
// }


// // 6task
// #include <stdio.h>
// int main(){
//     int uch,b,on,yuz,y_uch;
//     printf("Enter number!");
//     scanf("%d", &uch);
//     yuz = uch / 100;
//     on = (uch / 10) % 10;
//     b = uch % 10;
//     y_uch = yuz* 100 + b * 10 + on;
//     printf("son=%d", y_uch);
// }



// // 7task
// #include <stdio.h>

// int main() {

//     int n, yuzlik;

//     printf("Son kiriting: ");
//     scanf("%d", &n);

//     yuzlik = (n / 100) % 10;

//     printf("Yuzlik xonasi = %d", yuzlik);

//     return 0;
// }




// // 8 task
// #include <stdio.h>

// int main() {

//     int n, minglik;

//     printf("Son kiriting: ");
//     scanf("%d", &n);

//     minglik = (n / 1000) % 10;

//     printf("Minglik xonasi = %d", minglik);

//     return 0;
// }



// // 9task
// #include <stdio.h>

// int main() {

//     int N, minut;

//     printf("Sekund kiriting: ");
//     scanf("%d", &N);

//     minut = N / 60;

//     printf("Tola minut = %d", minut);

//     return 0;
// }




// // 10 task
// #include <stdio.h>

// int main() {

//     int N, soat;

//     printf("Sekund kiriting: ");
//     scanf("%d", &N);

//     soat = N / 3600;

//     printf("Tola soat = %d", soat);

//     return 0;
// }