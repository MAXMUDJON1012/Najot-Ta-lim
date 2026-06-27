#include <stdio.h>
int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}
int main() {
    printf("%d\n", multiply(3, 4));
    printf("%d\n", multiply(5, 2));
    return 0;
}



#include <stdio.h>
int min_array(int *arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[] = {-5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", min_array(arr, size));
    return 0;
}




#include <stdio.h>
int count_positive(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {3, -1, 5, -2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", count_positive(arr, size));
    return 0;
}






#include <stdio.h>
#include <string.h>
int is_palindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main() {
    char s[] = "mol";
    printf("%d", is_palindrome(s));
    return 0;
}




#include <stdio.h>
void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    print_pattern(11);
    return 0;
}




#include <stdio.h>
int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiply(a, b - 1);
}
int main() {
    printf("%d\n", multiply(3, 4));
    printf("%d\n", multiply(5, 2));
    return 0;
}




#include <stdio.h>
int min_array(int *arr, int size) {
    if (size == 1) {
        return arr[0];
    }
    int min = min_array(arr + 1, size - 1);
    if (arr[0] < min) {
        return arr[0];
    }
    return min;
}
int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", min_array(arr, size));
    return 0;
}





#include <stdio.h>
int count_positive(int *arr, int size) {
    if (size == 0) {
        return 0; 
    }
    if (arr[0] > 0) {
        return 1 + count_positive(arr + 1, size - 1);
    } else {
        return count_positive(arr + 1, size - 1);
    }
}
int main() {
    int arr1[] = {3, -1, 5, -2, 8};
    int arr2[] = {-5, -3, -1};
    printf("%d\n", count_positive(arr1, 5)); // 3
    printf("%d\n", count_positive(arr2, 3)); // 0
    return 0;
}






#include <stdio.h>
#include <string.h>
int is_palindrome(char *s, int left, int right) {
    if (left >= right) {
        return 1;
    }
    if (s[left] != s[right]) {
        return 0;
    }
    return is_palindrome(s, left + 1, right - 1);
}
int main() {
    char s[100];
    printf("String kiriting: ");
    scanf("%s", s);
    int len = strlen(s);
    if (is_palindrome(s, 0, len - 1)) {
        printf("1\n"); // palindrom
    } else {
        printf("0\n"); // palindrom emas
    }
    return 0;
}







// GPT da qildim oxirgisini
#include <stdio.h>
void print_pattern(int n) {
    if (n == 0) {
        return; // to‘xtash sharti
    }
    print_pattern(n - 1); // avval kichigini chiqaradi
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}
int main() {
    print_pattern(4);
    return 0;
}







