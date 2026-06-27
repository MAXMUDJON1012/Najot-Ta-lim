// Task1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(4 * sizeof(int));
    int sum = 0;

    for(int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.2f\n", sum / 4.0);

    free(a);
    return 0;
}



// Task2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = calloc(8, sizeof(int));
    for(int i = 0; i < 8; i++) {
        a[i] = i;
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    free(a);
    return 0;
}


// Task3
#include <stdio.h>
#include <stdlib.h>
int main() {
    float *a = malloc(5 * sizeof(float));
    float max;
    for(int i = 0; i < 5; i++) {
        scanf("%f", &a[i]);
    }
    max = a[0];
    for(int i = 1; i < 5; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("%.2f\n", max);

    free(a);
    return 0;
}


// Task4
#include <stdio.h>
#include <stdlib.h>

int* create_range(int start, int end) {
    int *a = malloc((end - start + 1) * sizeof(int));

    for(int i = 0; start <= end; i++) {
        a[i] = start;
        start++;
    }

    return a;
}

int main() {
    int *a = create_range(3, 8);

    for(int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}



// Task5
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(2 * sizeof(int));

    a[0] = 5;
    a[1] = 10;

    a = realloc(a, 4 * sizeof(int));

    a[2] = 0;
    a[3] = 0;

    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}


// Task6
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = calloc(10, sizeof(int));
    int count = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if(a[i] < 0) count++;
    }

    printf("%d\n", count);

    free(a);
    return 0;
}


// Task7
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = malloc(30);

    scanf("%s", s);

    int len = 0;
    while(s[len] != '\0') {
        len++;
    }

    printf("%d\n", len);

    free(s);
    return 0;
}





// Task9
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i++) {
        a[i] = i + 1;
    }

    free(a);

    a = malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i++) {
        a[i] = (i + 1) * 10;
    }

    for(int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}






