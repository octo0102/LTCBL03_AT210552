#include <stdio.h>

int fibo(int x){
    if (x == 1 || x == 2){
        return 1;
    }
    return fibo(x-1)+fibo(x-2);
}

int main(){
    int a;
    printf("Nhap phan tu thu n trong day fibonacci: ");
    scanf("%d", &a);
    printf("%d\n", fibo(a));
}
