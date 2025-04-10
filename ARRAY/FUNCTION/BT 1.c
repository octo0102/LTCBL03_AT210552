#include <stdio.h>
#include <math.h>

int Cal(int a, int b){
    return pow(a,b);
}
int main(){
    int x,y;
    printf("Nhap x,y: ");
    scanf("%d %d", &x, &y);
    printf("%d",Cal(x,y));
}
