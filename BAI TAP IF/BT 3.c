#include <stdio.h>

int main(){
    double diemso;
    printf("Nhap vao diem so de danh gia: ");
    scanf("%lf", &diemso);
    if ( diemso < 5){
        printf("Yeu");
    } else if ( 5 <= diemso && diemso < 7){
        printf("Trung Binh");
    } else if ( 7 <= diemso && diemso < 8){
        printf("Kha");
    } else if ( 8 <= diemso && diemso < 9){
        printf("Gioi");
    } else if (diemso >= 9){
        printf("Xuat Sac");
    } 
    else {
        printf("Diem so nhap vao khong hop le");
    }
    return 0;
}
