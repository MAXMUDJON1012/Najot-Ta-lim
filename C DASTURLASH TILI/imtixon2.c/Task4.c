#include <stdio.h>
int main(){
    FILE *f = fopen("matn.txt","r");
    int upper= 0,lower=0;
    int c;
    while ((c = fgetc(f)) != EOF){
        if (c>='A'& & c <= 'Z')upper++;
        if (c>=' a'&&c <= 'z')lower++;
    }
    printf("Katta: %d\n",upper);
    printf("Kichik: %d\n",lower);
    fclose(f);
    return 0;
}