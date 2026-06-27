// Task1
#include <stdio.h>
#include <string.h>

struct Car {
    char brand[50];  
    int year;       
    float price;     
};
int main() {
    struct Car cars[3];
    
    strcpy(cars[0].brand, "Chevrolet");
    cars[0].year = 2020;
    cars[0].price = 28000.0;
    
    strcpy(cars[1].brand, "Toyota");
    cars[1].year = 2018;
    cars[1].price = 22000.0;
    
    strcpy(cars[2].brand, "BMW");
    cars[2].year = 2022;
    cars[2].price = 55000.0;
    
    printf("list of cars:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s %d %.1f\n", cars[i].brand, cars[i].year, cars[i].price);
    }
    printf("\n");
    
    int max_index = 0; 
    for(int i = 1; i < 3; i++) {
        if(cars[i].price > cars[max_index].price) {
            max_index = i;  
        }
    }

    printf("Eng qimmat: %s (%.1f)\n", 
           cars[max_index].brand, 
           cars[max_index].price);
    
    return 0;
}



// Task2
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];   
    int math;        
    int english;     
    int science;     
};

float average(struct Student s) {
    float avg = (s.math + s.english + s.science) / 3.0;
    return avg;
}
int main() {
    struct Student students[4];

    strcpy(students[0].name, "Ali");
    students[0].math = 90;
    students[0].english = 80;
    students[0].science = 85;
    
    strcpy(students[1].name, "Fatima");
    students[1].math = 95;
    students[1].english = 92;
    students[1].science = 88;

    strcpy(students[2].name, "VAli");
    students[2].math = 78;
    students[2].english = 82;
    students[2].science = 80;
    
    strcpy(students[3].name, "Zubayr");
    students[3].math = 88;
    students[3].english = 91;
    students[3].science = 93;
    
    printf("Average score of students:\n");
    
    for(int i = 0; i < 4; i++) {
        float avg = average(students[i]);
        printf("%s: math=%d, english=%d, science=%d o'rtacha: %.1f\n",
               students[i].name,
               students[i].math,
               students[i].english,
               students[i].science,
               avg);
    }
    return 0;
}

// Task3
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[5] = {
        {"Ali", "+998901234567", "ali@mail.com"},
        {"Vali", "+998911112233", "vali@mail.com"},
        {"Sami", "+998933334455", "sami@mail.com"},
        {"Jasur", "+998944445566", "jasur@mail.com"},
        {"Aziza", "+998955556677", "aziza@mail.com"}
    };

    char searchName[50];
    int found = 0;

    printf("Enter name for seaching: ");
    scanf("%s", searchName);
    for (int i = 0; i < 5; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("%s | %s | %s\n",
                   contacts[i].name,
                   contacts[i].phone,
                   contacts[i].email);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Topilmadi\n");
    }
    return 0;
}



// Task4
#include <stdio.h>

struct Product {
    char name[50];
    int quantity;
    float price;
};
float total_cost(struct Product p) {
    return p.quantity * p.price;
}
void apply_discount(struct Product *p, float percent) {
    p->price = p->price * (100 - percent) / 100;
}
int main() {
    struct Product products[5] = {
        {"Olma", 10, 5000},
        {"Banan", 5, 12000},
        {"Sut", 8, 9000},
        {"Non", 15, 3000},
        {"Shakar", 4, 15000}
    };
    printf("bifore the discount\n");
    for (int i = 0; i < 5; i++) {
        printf("%s | Miqdor: %d | Narx: %.0f | Umumiy: %.0f\n",
               products[i].name,
               products[i].quantity,
               products[i].price,
               total_cost(products[i]));
    }
    for (int i = 0; i < 5; i++) {
        apply_discount(&products[i], 10);
    }
    printf("\n=== 10%% chegirmadan keyin ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%s | Miqdor: %d | Narx: %.0f | Umumiy: %.0f\n",
               products[i].name,
               products[i].quantity,
               products[i].price,
               total_cost(products[i]));
    }
    return 0;
}





// Task5
#include <stdio.h>
struct Time{
    int hours;
    int minutes;
    int seconds;
};
void display_time(struct Time t){
    printf("%02d:%02d:%02d\n",
           t.hours,
           t.minutes,
           t.seconds);
}
void add_seconds(struct Time *t, int seconds){

    t->hours += seconds / 3600;
    seconds %= 3600;

    t->minutes += seconds / 60;
    t->seconds += seconds % 60;

    t->minutes += t->seconds / 60;
    t->seconds %= 60;

    t->hours += t->minutes / 60;
    t->minutes %= 60;

    t->hours %= 24;

    display_time(*t);
}

int main(){

    struct Time t1 = {1, 30, 45};
    add_seconds(&t1, 90);

    struct Time t2 = {23, 59, 30};
    add_seconds(&t2, 45);

    return 0;
}