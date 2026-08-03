#include <stdio.h>

// int main() {
//     int n;

//     printf("n = ");
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         arr[i] = 2 * i + 1;   // 1, 3, 5, 7, ...
//     }

//     printf("Massiv elementlari:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


int main(){
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int fibanaccies[n];
    fibanaccies[0] = 1;
    fibanaccies[1] = 1;
    for (int i = 2; i < n; i++) {
        fibanaccies[i] = fibanaccies[i-1] + fibanaccies[i-2];
    }
    for (int i = 0; i < n; i++) {
        printf("%d", fibanaccies[i]);
    }
    return 0;
}


