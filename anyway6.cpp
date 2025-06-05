#include <stdio.h>

int main() {
    double income, tax = 0;

    printf("Nhap thu nhap ca nhan (trieu dong): ");
    scanf("%lf", &income);

    if (income <= 60) {
        tax = income * 0.05;
    } else if (income <= 120) {
        tax = 60 * 0.05 + (income - 60) * 0.10;
    } else if (income <= 216) {
        tax = 60 * 0.05 + 60 * 0.10 + (income - 120) * 0.15;
    } else if (income <= 384) {
        tax = 60 * 0.05 + 60 * 0.10 + 96 * 0.15 + (income - 216) * 0.20;
    } else {
        printf("Chua xu ly tren 384 trieu.\n");
        return 1;
    }

    printf("So tien thue phai nop: %.2lf trieu dong\n", tax);
    return 0;
}

