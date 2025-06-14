#include <stdio.h>

int main() {
    int n, max = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;
        if (digit > max)
            max = digit;
        n /= 10;
    }
    printf("Chu so lon nhat la: %d\n", max);
}
