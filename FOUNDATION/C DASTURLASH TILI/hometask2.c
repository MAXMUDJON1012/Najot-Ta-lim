// // task1
// #include <stdio.h>
// int main(){
//     int a,b,y;
//     printf("enter the numbers!");
//     scanf("%d %d",&a,&b);
//     y=a+b;
//     if (a==b) {
//         printf("%d %d\n",a=y,b=y);
//     } else {
//         printf("%d %d\n", a=0, b=0);
//     }
// }


// // 2task
// #include <stdio.h>
// int  main(){
//     int a,b;
//     printf("enter numbers!");
//     scanf("%d   %d",&a,&b);
//     if (a!=b){
//         if (a>b) {
//             printf("%d %d \n",a,b=a);
//         } else{
//             printf("%d  %d",a=b,b);
//         }
//     } else {
//         if (a==b) {
//             printf("%d %d\n",a=0,b=0);
//         }
//     }
//     return 0;
// }



// // task3
#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    printf("Smallest number = %d", min);

    return 0;
}




// // task4
#include <stdio.h>

int main() {
    int a, b, c;
    int min, max;

    scanf("%d %d %d", &a, &b, &c);

    min = max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;

    printf("%d %d", min, max);

    return 0;
}





// // task5
int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
        printf("%d", b + c);
    else if (b <= a && b <= c)
        printf("%d", a + c);
    else
        printf("%d", a + b);

    return 0;
}







// // task6
#include <stdio.h>

int main() {
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    if (A < B && B < C) {
        A *= 2;
        B *= 2;
        C *= 2;
    } else {
        A = -A;
        B = -B;
        C = -C;
    }

    printf("%.2f %.2f %.2f", A, B, C);

    return 0;
}






// // task7
#include <stdio.h>

int main() {
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    if ((A < B && B < C) || (A > B && B > C)) {
        A *= 2;
        B *= 2;
        C *= 2;
    } else {
        A = -A;
        B = -B;
        C = -C;
    }

    printf("%.2f %.2f %.2f", A, B, C);

    return 0;
}





// // task8
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b)
        printf("3");
    else if (a == c)
        printf("2");
    else
        printf("1");

    return 0;
}





// // task9
#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == b && b == c)
        printf("4");
    else if (a == b && b == d)
        printf("3");
    else if (a == c && c == d)
        printf("2");
    else
        printf("1");

    return 0;
}





// // task10
#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    int AB, AC;

    scanf("%d %d %d", &A, &B, &C);

    AB = abs(A - B);
    AC = abs(A - C);

    if (AB < AC)
        printf("Yaqin nuqta: B\nMasofa: %d", AB);
    else
        printf("Yaqin nuqta: C\nMasofa: %d", AC);

    return 0;
}







// // task11
#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("0");
    else if (y == 0)
        printf("1");
    else if (x == 0)
        printf("2");
    else
        printf("3");

    return 0;
}







// // task12
#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1-chorak");
    else if (x < 0 && y > 0)
        printf("2-chorak");
    else if (x < 0 && y < 0)
        printf("3-chorak");
    else if (x > 0 && y < 0)
        printf("4-chorak");

    return 0;
}






// // task13
#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int x4, y4;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    if (x1 == x2)
        x4 = x3;
    else if (x1 == x3)
        x4 = x2;
    else
        x4 = x1;

    if (y1 == y2)
        y4 = y3;
    else if (y1 == y3)
        y4 = y2;
    else
        y4 = y1;

    printf("To'rtinchi uch: (%d, %d)", x4, y4);

    return 0;
}