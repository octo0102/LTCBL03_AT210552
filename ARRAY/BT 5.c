#include <stdio.h>

int nhap_mang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    return 0;
}

int count_occurrences(int n, int a[]) {
    int counted[100] = {0}; // Array to mark counted numbers
    int unique_numbers[100], unique_count = 0;

    for (int i = 0; i < n; i++) {
        if (counted[i]) continue; // Skip if already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                counted[j] = 1; // Mark as counted
            }
        }

        if (count == 1) {
            unique_numbers[unique_count++] = a[i]; // Store unique numbers
        } else {
            printf("%d xuat hien %d lan.\n", a[i], count);
        }
    }

    // Print all unique numbers in one line
    if (unique_count > 0) {
        printf("Cac so xuat hien 1 lan: ");
        for (int i = 0; i < unique_count; i++) {
            printf("%d ", unique_numbers[i]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int a[100], n;

    printf("Nhap so luong phan tu n (n <= 100): ");
    scanf("%d", &n);
    
    printf("Nhap cac phan tu trong mang: ");
    nhap_mang(n, a);

    printf("Tan suat xuat hien cua cac so trong mang:\n");
    count_occurrences(n, a);

    return 0;
}
