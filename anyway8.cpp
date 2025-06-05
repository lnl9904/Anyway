#include <stdio.h>

int main() {
    int amount;
    int denominations[] = {500000, 200000, 100000, 50000, 20000, 10000};
    int count, i;

    printf("Nhap so tien can rut (boi so cua 10000): ");
    scanf("%d", &amount);

    // Ki?m tra tính h?p l?
    if (amount % 10000 != 0) {
        printf("So tien khong hop le! Phai la boi so cua 10,000.\n");
        return 1;
    }

    printf("Phan bo menh gia tien:\n");
    for (i = 0; i < 6; i++) {
        count = amount / denominations[i];
        if (count > 0) {
            printf("%d x %d VND\n", count, denominations[i]);
        }
        amount %= denominations[i];
    }

    return 0;
}

