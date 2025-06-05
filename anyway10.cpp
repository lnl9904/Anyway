#include <stdio.h>

int main() {
    int kWh;
    float total = 0;

    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &kWh);

    if (kWh <= 0) {
        printf("So dien khong hop le.\n");
        return 1;
    }

    if (kWh <= 50) {
        total = kWh * 1678;
    } else if (kWh <= 100) {
        total = 50 * 1678 + (kWh - 50) * 1734;
    } else if (kWh <= 200) {
        total = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
    } else {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
    }

    printf("Tien dien phai tra: %.0f VND\n", total);
    return 0;
}

