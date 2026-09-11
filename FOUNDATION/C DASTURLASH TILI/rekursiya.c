// #include <stdio.h>
// int faktorial(int n){
//     if (n==1)return 1;
//     return n* faktorial (n-1);
// }
// int main(){
//     int a=5,b=10;
//     printf("Faktorial:%d\n",faktorial(5));
// }







// #include <stdio.h>
// int fibanachi(int f1,int f2,int  n){
//     if (n==1){
//         printf("%d",f1);
//         return f1;
//     }
//     else if (n==2){
//         printf("%d",f2);
//         return f2+fibanachi(f2,f1+f2,n-1);
//     }
// }



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