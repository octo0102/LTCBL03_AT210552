#include <stdio.h>
int main(){
    int x,n=0;
    printf("Nhap mang so nguyen va cac so: ");
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < x; i++ ){
        if (a[i] < 0){
            a[i] = 0;
        }
        printf("%d ", a[i]);
    return 0;
    } 
}    
