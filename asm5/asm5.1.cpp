#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nTong cac uoc la: %d\n", sum);
    return 0;
}
