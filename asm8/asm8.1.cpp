#include <stdio.h>

int gcd_simple(int a, int b) {
    int mn = (a < b) ? a : b;
    for (int i = mn; i >= 1; i--) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;  // N?u không t?m th?y, th? GCD là 1
}

int main(void) {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    printf("GCD(%d, %d) = %d\n", a, b, gcd_simple(a, b));
    return 0;
}

