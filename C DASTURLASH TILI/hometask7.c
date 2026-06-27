#include <stdio.h>







int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 2 * i + 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}




int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    arr[0] = 1;
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] * 2;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}






int main() {
    int n, A, D;
    scanf("%d %d %d", &n, &A, &D);

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = A + i * D;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}





int main() {
    int n, A, Q;
    scanf("%d %d %d", &n, &A, &Q);

    int arr[n];

    arr[0] = A;

    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] * Q;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}








int main() {
    int n, i;
    printf("n kiriting: ");
    scanf("%d", &n);
    int F[n];
    F[0] = 1;
    F[1] = 1;
    for (i = 2; i < n; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    for (i = 0; i < n; i++) {
        printf("F[%d] = %d\n", i, F[i]);
    }
    return 0;
}






int main() {
    int n, i;
    int a[100];

    scanf("%d %d %d", &n, &a[0], &a[1]);

    for (i = 2; i < n; i++)
        a[i] = a[i-1] + a[i-2];

    for (i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}




int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n-1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}





int main() {
    int n, i, son = 0;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
            son++;
        }

    printf("\nToq sonlar soni: %d", son);

    return 0;
}






int main() {
    int n, i, son = 0;
    printf("N ta son kiriting ixtiyoriiy! ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n-1; i >= 0; i--)
        if (a[i] % 2 == 0) {
            printf("a[%d] = %d\n", i, a[i]);
            son++;
        }

    printf("Juft sonlar soni: %d", son);

    return 0;
}





#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Juft indekslilar - o'sish tartibida
    for (i = 0; i < n; i += 2)
        printf("a[%d] = %d\n", i, a[i]);

    printf("---\n");

    // Toq indekslilar - kamayish tartibida
    if (n % 2 == 0) i = n - 1;
    else i = n - 2;

    for (; i >= 1; i -= 2)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}





#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = k; i < n; i += k)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}




#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i += 2)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}




#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n-1; i >= 0; i -= 2)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}



#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i += 2)
        printf("a[%d] = %d\n", i, a[i]);

    for (i = 1; i < n; i += 2)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}