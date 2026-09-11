#include <stdio.h>
#include <string.h>





// Task1
int main(){
    FILE *f = fopen("sonlar.txt","w");
    int son;
    for(int i=0; i<5; i++){
        scanf("%d",&son);
        fprintf(f,"%d\n",son);
    }
    fclose(f);
    return 0;
}






// Task2
int main(){
    FILE *f = fopen("sonlar.txt","w");
    int son;
    for(int i=0; i<5; i++){
        scanf("%d",&son);
        fprintf(f,"%d\n",son);
    }
    fclose(f);
    return 0;
}







// Task3
int main(){
    FILE *f = fopen("kontaktlar.txt","a");
    char ism[50];
    scanf("%s",ism);
    fprintf(f,"%s\n",ism);
    fclose(f);
    return 0;
}



// Task4
int main(){
    FILE *f = fopen("matn.txt","w");
    fprintf(f,"Bugun O'zbekiston va partugaliya o'ynaydi.\n");
    fprintf(f,"lekin man ko'rmiman.\n");
    fprintf(f,"Chunki u qiziq emas edi.\n");
    fprintf(f,"0:5 😁\n");
    fclose(f);
    f = fopen("matn.txt","r");
    int qatorlar = 0;
    char buffer[100];
    while(fgets(buffer,sizeof(buffer),f) != NULL){
        qatorlar++;
    }
    printf("Qatorlar: %d\n",qatorlar);
    fclose(f);
    return 0;
}





// Task5
int main(){
    FILE *f = fopen("ismlar.txt","r");
    char ism[50], max_ism[50]="";
    while(fscanf(f,"%s",ism) != EOF){
        if(strlen(ism) > strlen(max_ism)){
            strcpy(max_ism,ism);
        }
    }
    printf("Eng uzun: %s\n",max_ism);
    fclose(f);
    return 0;
}


// Task6
int main(){
    FILE *f = fopen("sonlar.txt","w");
    int son;
    for(int i=0; i<10; i++){
        scanf("%d",&son);
        fprintf(f,"%d\n",son);}
    fclose(f);
    f = fopen("sonlar.txt","r");
    while(fscanf(f,"%d",&son) != EOF){
        if(son%2==0)
            printf("%d ",son);}
    printf("\n");
    fclose(f);
    return 0;
}





// Task8
int main(){
    FILE *f1 = fopen("fayl1.txt","w");
    FILE *f2 = fopen("fayl2.txt","w");
    int son;
    for(int i=0; i<5; i++){
        scanf("%d",&son);
        fprintf(f1,"%d\n",son);}
    for(int i=0; i<5; i++){
        scanf("%d",&son);
        fprintf(f2,"%d\n",son);}
    fclose(f1);
    fclose(f2);
    f1 = fopen("fayl1.txt","r");
    f2 = fopen("fayl2.txt","r");
    int sum = 0;
    
    while(fscanf(f1,"%d",&son) != EOF) 
    sum += son;
    while(fscanf(f2,"%d",&son) != EOF) 
    sum += son;
    
    printf("Yig'indi: %d\n",sum);
    fclose(f1);
    fclose(f2);
    return 0;}



// Task9
int main(){
    FILE *f = fopen("hisob.txt","a");
    int xarajat;
    scanf("%d",&xarajat);
    fprintf(f,"%d\n",xarajat);
    fclose(f);
    f = fopen("hisob.txt","r");
    int sum = 0;
    while(fscanf(f,"%d",&xarajat) != EOF){
        sum += xarajat;
    }
    printf("Overall: %d\n",sum);
    fclose(f);
    return 0;
}



// Task10
int main(){
    FILE *f = fopen("talabalar.txt","r");
    char ism[30];
    int yosh;
    float baho;
    while(fscanf(f,"%[^,],%d,%f",&ism,&yosh,&baho) != EOF){
        if(yosh > 18){
            printf("%s\n",ism);}
    }
    fclose(f);
    return 0;
}


















