#include <Stdio.h>
#include <stdlib.h>
int main (){
    int *ages=malloc(20);
    if(ages==NULL){
        printf("Xotiradaan joy ajratilamddi! \n");
        return 0;
    }
    for (int i=0; i<5; i++){
        scanf("%d",(ages+i));
    }
    printf("*** Result***\n");
    for(int i =0;i<5;i++){
        printf("%d\n",*(ages+i));
    }
    free(ages);
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("enter number: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("n must be positive number!\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("das not sprate plase from memory\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    
    printf("\nMassiv items:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}






#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int *)calloc(6, sizeof(int));
    
    if (arr == NULL) {
        printf("das not sprate plase from memory!\n");
        return 1;
    }

    printf("six INT sprate with Calloc :\n\n");
    for (int i = 0; i < 6; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}







#include <stdio.h>
#include <stdlib.h>

int main() {
    float *arr = (float *)malloc(4 * sizeof(float));
    
    if (arr == NULL) {
        printf("das not sprate plase from memory!\n");
        return 1;
    }
    
    printf("Enter four price\n");
    for (int i = 0; i < 4; i++) {
        printf("price %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }
    printf("\nEntring price:\n");
    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %.2f\n", i, arr[i]);
    }
    printf("\nSUM: %.2f\n", sum);
    
    free(arr);
    
    return 0;
}
