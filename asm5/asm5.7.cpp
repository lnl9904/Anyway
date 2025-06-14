#include <stdio.h>

int main() {
    int a, b, i, j, dem;

    printf("Nhap a va b (a < b): ");
    scanf("%d%d", &a, &b);

    printf("Cac so nguyen to tu %d den %d la:\n", a, b);
    for (i = a; i <= b; i++) {
        if (i < 2) continue; // B? qua s? nh? hõn 2

        dem = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) dem++;
        }
        if (dem == 2) printf("%d ", i);
    }
}
