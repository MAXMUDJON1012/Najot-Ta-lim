#include <Stdio.h>
#include <String.h>

int main (){
    FILE *f = fopen ("sonlar.txt","r"); 

    if(f==NULL){
        printf("The file does not open!\n");
        return 0;

    };

int sonlar [100];
int i=0;
while (fscanf(f,"%d",(sonlar+i)) !=EOF){
    printf("%d",sonlar[i]);
    i++;
}
printf("\nread file!\n");
fclose(f);
}