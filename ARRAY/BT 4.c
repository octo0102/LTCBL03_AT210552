#include <stdio.h>
int main(){
    int x,l1 = 1,l2 = 1;
    printf("Nhap mang so nguyen va cac so: ");
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
    }
    int min = a[0], max = a[0];
    for (int i = 1; i < x; i++ ){
        if ( max < a[i]){ // if first number in array is smaller than second number, set max to second
            max = a[i];
            l1++;
        }
        if (min > a[i]){ // if first number in array is larger than second number, set min to second
            min = a[i];
            l2++;
        }
    }
    printf("Phan tu lon nhat la %d o vi tri %d\nPhan tu be nhat la %d o vi tri %d\n", max, l1, min, l2);
    return 0;
}    
