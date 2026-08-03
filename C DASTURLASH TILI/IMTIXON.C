// TASK7
#include <stdio.h>

int main() {

    float a, b;

    printf("To'rtburchak\n");

    printf("a tomonini kiriting: ");
    scanf("%f", &a);

    printf("b tomonini kiriting: ");
    scanf("%f", &b);

    float yuza = a * b;
    float perimetr = 2 * (a + b);

    printf("Yuza = %.2f\n", yuza);
    printf("Perimetr = %.2f\n", perimetr);

    return 0;
}






// TASK8
#include <stdio.h>
int main(){
    int a, b, c;
    int musbat = 0, manfiy = 0;

    printf("\n Musbat va Manfiy \n");
    printf("3 ta son kiriting: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0) musbat++; else if (a < 0) manfiy++;
    if (b > 0) musbat++; else if (b < 0) manfiy++;
    if (c > 0) musbat++; else if (c < 0) manfiy++;

    printf("Musbat sonlar soni: %d\n", musbat);
    printf("Manfiy sonlar soni: %d\n", manfiy);
}




// TASK 9
#include <stdio.h>
int main(){
    int a, b, i;
    int yigindi = 0;

    printf("Musbat sonlar yig'indisi \n");
    printf("A kiriting: ");
    scanf("%d", &a);
    printf("B kiriting: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {
        if (i > 0) {
            yigindi += i;
        }
    }

    printf("Yig'indi = %d\n", yigindi);
}



// TASK10
#include <stdio.h>
int main(){
    int n;

    printf("\n3 va 4 ga bo'linish\n");
    printf("N kiriting: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 4 == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}

// TASK11
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= n - (i > n/2 ? n-i : i-1))
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n"); }
}






// TASK12
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, D, x1, x2;
    printf("3 ta son kiriting: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0) {
        x1 =(-b + sqrt(D)) / (2 * a);
        x2 =(-b - sqrt(D)) / (2 * a);

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f", x2);
    }
    else if (D == 0) {
        x1 = -b / (2 * a);

        printf("x1 = x2 = %.2f", x1);
    }
    else {
        printf("Yechimga ega emas");
    }

    return 0;
}




