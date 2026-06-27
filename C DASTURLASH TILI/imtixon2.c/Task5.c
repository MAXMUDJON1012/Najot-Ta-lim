#include <stdio.h>
#include <string.h>
struct Student {
    char name[30];
    int age;
    float gpa;
    int _id;
};
void display_student(struct Student st) {
    printf("Ism: %s\n", st.name);
    printf("Yosh: %d\n", st.age);
    printf("GPA: %.2f\n", st.gpa);
    printf("ID: %d\n", st._id);
}
int main() {
    struct Student s = {"Ali", 20,9,001};
    display_student(s);
    return 0;
}