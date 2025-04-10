// Cramer Rule (https://www.youtube.com/watch?v=RdLo-9jh2EM)

#include <stdio.h>

int main()
{
    double a, b, c, d, e, f, D, x1, x2;
    printf("Nhap cac so vao phuong trinh dau tien: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Nhap cac so vao phuong trinh thu hai: ");
    scanf("%lf %lf %lf", &d, &e, &f);
    // We solve the equation by using Cramer's Rule
    D = (a*e)-(d*b);
    if (D == 0) {
        printf("He phuong trinh vo nghiem hoac vo so nghiem.\n");
    } else {
    x1 = ((c*e)-(b*f))/D;
    x2 = ((a*f)-(d*c))/D;
    printf("Nghiem cua he phuong trinh: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
    return 0;
}
