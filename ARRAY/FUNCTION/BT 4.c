#include <stdio.h>

void in(int a, int b, float matrix[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%f", &matrix[i][j]);  // Fixed format specifier
        }
    }
}

void out(int a, int b, float matrix[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%g ", matrix[i][j]);  // Use %g because of float
        }
        printf("\n");
    }
}

void add(int a, int b, float mt1[a][b], float mt2[a][b], float mt[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            mt[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
}

void multi(int a, int b, int c, int d, float mt1[a][b], float mt2[c][d], float mt[a][d]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            float sum = 0;
            for (int k = 0; k < b; k++) {  // Fixed loop condition
                sum += mt1[i][k] * mt2[k][j];
            }
            mt[i][j] = sum;
        }
    }    
} 

int main() {
    int a, b, c, d;
    printf("Nhap hang, cot ma tran A va ma tran B: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a != c || b != d) {
        printf("Khong cong duoc 2 ma tran khong cung kich thuoc\n");
    }

    if (b != c) {
        printf("Khong nhan duoc 2 ma tran voi nhau\n");
    }

    float mt1[a][b];
    float mt2[c][d];

    printf("Nhap ma tran A: \n");
    in(a, b, mt1);
    printf("Nhap ma tran B: \n");
    in(c, d, mt2);

    printf("\nMa tran A: \n");
    out(a, b, mt1);
    printf("\nMa tran B: \n");
    out(c, d, mt2);

    if (a == c && b == d) {
        float sum[a][b];
        add(a, b, mt1, mt2, sum);
        printf("\nTong cua 2 ma tran la: \n");
        out(a, b, sum);
    }

    if (b == c) {
        float prod[a][d];
        multi(a, b, c, d, mt1, mt2, prod);
        printf("\nTich cua 2 ma tran la: \n");
        out(a, d, prod);
    }

    return 0;
}
