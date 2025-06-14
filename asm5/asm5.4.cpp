#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n >= 10) {
        n /= 10;
    }
    printf("Chu so dau tien la: %d\n", n);
    return 0;
}
