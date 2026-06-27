#include <stdio.h>

// int main() {
//     float prrice = 15.99;
//     float *p = &prrice;

//     printf("Qiymati: %f\n", prrice);
//     printf("O'rni: %p\n", (void *)&prrice);
//     printf("Pointer qiymati: %p\n", (void *)p);

//     return 0;
// }


// int main(){
//     int a, b;
//     printf("a ni kiriting: ");
//     scanf("%d", &a);
//     printf("b ni kiriting: ");
//     scanf("%d", &b);

//     while (b != 0) {
//         int tmp = b;
//         b = a % b;
//         a = tmp;
//     }

//     printf("EKUB: %d\n", a);
//     return 0;
// }



// int main(){
//     int a;
//     printf("a ni kiriting: ");
//     if (scanf("%d", &a) != 1) {
//         return 0;
//     }

//     int original = a;
//     int n;
//     if (a < 0) {
//         n = -a;
//     } else {
//         n = a;
//     }
//     int reversed = 0;

//     while (n > 0) {
//         reversed = reversed * 10 + n % 10;
//         n /= 10;
//     }

//     if (a < 0) {
//         reversed = -reversed;
//     }

//     if (a == reversed) {
//         printf("%d polidrom son.\n", original);
//     } else {
//         printf("%d polidrom son emas.\n", original);
//     }

//     return 0;
// }






int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int a[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            printf("%d", a[i][j]);
            if (i + 1 < n) printf(" ");
        }
        printf("\n");
    }

    return 0;
}