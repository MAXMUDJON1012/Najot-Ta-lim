#include <stdio.h>
#include <string.h>

// struct Student {
//     char ism[50];
//     char familiya[50];
//     int age;
//     float score;
// };

// int main() {
//     struct Student s1;
//     strcpy(s1.ism, "Toshmat");
//     strcpy(s1.familiya, "Boltaboyev");
//     s1.age = 20;
//     s1.score = 4.6f;
//     printf("%s %s\n", s1.ism, s1.familiya);
//     return 0;
// } 


#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    char author[50];
    int price;
    float discount;
    int year;
};

float calculate_price(struct Book *book) {
    return book->price * (1 - book->discount / 100);
}

int main() {
    struct Book b1 = {"Nabaviy tarbiyasi", "Adham Sharqoviy", 100000, 5, 2024};
    printf("kitob narxi: %.2f\n", calculate_price(&b1));
    return 0;
}