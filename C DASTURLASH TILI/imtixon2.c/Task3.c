#include <stdio.h>
#include <string.h>
int main() {
    int numbers[10]={1,2,3,4,5,7};
    for (int i=0;i<9; i++){
        for (int j=0;j<9-i;j++){


            if (numbers[j] < numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1]= temp;
            }
        }
    }
    for (int i=0;i<10;i++)
        printf("%d ",numbers[i]);
    return 0;
}






