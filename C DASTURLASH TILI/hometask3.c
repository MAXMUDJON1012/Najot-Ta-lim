// task1
#include <stdio.h>
int main() {
    int A, B, sum = 0, i;
    printf("A ni kiriting: ");
    scanf("%d", &A);
    printf("B ni kiriting: ");
    scanf("%d", &B);
    i = A;
    while (i <= B) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }
    printf("Yig'indi = %d\n", sum);
    return 0;
}

// task2
int main() {
    int n, i = 1, fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while (i <= n) {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %d", fact);

    return 0;
}






// task3
int main() {
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of numbers = %d\n", sum);

    return 0;
}





// task4
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x1, x2;
    int chose;

    while (1) {
        printf("a, b, c  enters: ");
        scanf("%f %f %f", &a, &b, &c);

        D = b * b - 4 * a * c;

        if (D < 0) {
            printf("Diskrimnat minus!\n");
            printf("1 - Try again\n");
            printf("0 - exit\n");

            scanf("%d", &chose);

            if (chose == 0) {
                break;
            }
        } else {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);

            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);

            break;
        }
    }

    return 0;
}




// task7
#include <stdio.h>

int main() {
    int month, day;

    scanf("%d %d", &day, &month);

    switch(month) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (day < 31) {
                printf("Oy: %d\nKun: %d", month, day + 1);
            }
            else {
                printf("Oy: %d\nKun: %d", month + 1, 1);
            }
            break;

        case 2:
            if (day < 28) {
                printf("Oy: %d\nKun: %d", month, day + 1);
            }
            else {
                printf("Oy: %d\nKun: %d", month + 1, 1);
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (day < 30) {
                printf("Oy: %d\nKun: %d", month, day + 1);
            }
            else {
                printf("Oy: %d\nKun: %d", month + 1, 1);
            }
            break;

        case 12:
            if (day < 31) {
                printf("Oy: %d\nKun: %d", month, day + 1);
            }
            else {
                printf("Oy: 1\nKun: 1");
            }
            break;
    }

    return 0;
}







// task 8
#include <stdio.h>

int main() {

    int direction, command;

    scanf("%d %d", &direction, &command);

    switch(direction) {

        case 1:
            if(command == 0)
                printf("Shimol");
            else if(command == 1)
                printf("G'arb");
            else
                printf("Sharq");
            break;

        case 2:
            if(command == 0)
                printf("Sharq");
            else if(command == 1)
                printf("Shimol");
            else
                printf("Janub");
            break;

        case 3:
            if(command == 0)
                printf("Janub");
            else if(command == 1)
                printf("Sharq");
            else
                printf("G'arb");
            break;

        case 4:
            if(command == 0)
                printf("G'arb");
            else if(command == 1)
                printf("Janub");
            else
                printf("Shimol");
            break;
    }

    return 0;
}