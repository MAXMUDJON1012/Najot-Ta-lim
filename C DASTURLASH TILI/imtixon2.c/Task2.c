#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int juft_sonlar[1000];
    int _count = 0; // _count - juft sonlarning umumiy soni
    
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            juft_sonlar[_count] = i;
            _count++;
        }
    }
    
    printf("Juft sonlar: ");
    for (int i = 0; i < _count; i++) {
        printf("%d ", juft_sonlar[i]);
    }
    printf("\nJami: %d ta\n", _count);
    
    return 0;
}