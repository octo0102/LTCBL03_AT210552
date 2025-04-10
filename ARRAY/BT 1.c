#include <stdio.h>
int main(){
    int a[10];
    printf("Nhap 10 so nguyen: ");
    for (int i = 0; i < 10; i++ ){
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    return 0;
}
