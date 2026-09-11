// task1
#include <stdio.h>
int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) {
        printf("%d\n", k);
    }
    return 0;
}



// task2
#include <stdio.h>

int main() {
    int a, b, i, soni = 0;
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++) {
        soni++;
        printf("%d\n", i);
    }
    printf("%d\n", soni);
    return 0;
}





// task 3
#include <stdio.h>

int main() {

    int a, b, soni = 0;

    scanf("%d %d", &a, &b);

    for(int i = b - 1; i > a; i--) {
        printf("%d\n", i);
        soni++;
    }

    printf("Soni = %d", soni);

    return 0;
}




// task 4
#include <stdio.h>

int main() {

    float narx;

    scanf("%f", &narx);

    for(int i = 1; i <= 10; i++) {
        printf("%d kg = %.2f\n", i, i * narx);
    }

    return 0;
}








// task5
#include <stdio.h>

int main() {

    float narx;

    scanf("%f", &narx);

    for(float i = 0.1; i <= 1.0; i += 0.1) {
        printf("%.1f kg = %.2f\n", i, i * narx);
    }

    return 0;
}




// task 6
#include <stdio.h>

int main() {

    float narx;

    scanf("%f", &narx);

    for(float i = 1.2; i <= 2.0; i += 0.2) {
        printf("%.1f kg = %.2f\n", i, i * narx);
    }

    return 0;
}






// task7
#include <stdio.h>

int main() {

    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}







// task8
#include <stdio.h>

int main() {

    int a, b;
    long long kop = 1;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        kop *= i;
    }

    printf("%lld", kop);

    return 0;
}



// task9
#include <stdio.h>

int main() {

    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        sum += i * i;
    }

    printf("%d", sum);

    return 0;
}





// task10
#include <stdio.h>
#include <math.h>

int main() {

    int N, K;
    int sum = 0;

    scanf("%d %d", &N, &K);

    for(int i = 1; i <= N; i++) {
        sum += pow(i, K);
    }

    printf("%d", sum);

    return 0;
}




// task11
#include <stdio.h>
#include <math.h>

int main() {

    int N;
    int sum = 0;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        sum += pow(i, i);
    }

    printf("%d", sum);

    return 0;
}





// task 12
#include <stdio.h>
#include <math.h>

int main() {

    int N;
    int sum = 0;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        sum += pow(i, N - i + 1);
    }

    printf("%d", sum);

    return 0;
}



// task13
#include <stdio.h>

int main() {

    int A, B;

    scanf("%d %d", &A, &B);

    for(int i = A; i <= B; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}




// task14
#include <stdio.h>

int main() {

    int A, B;
    int count = 1;

    scanf("%d %d", &A, &B);

    for(int i = A; i <= B; i++) {

        for(int j = 1; j <= count; j++) {
            printf("%d ", i);
        }

        count++;
        printf("\n");
    }

    return 0;
}