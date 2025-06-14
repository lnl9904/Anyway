#include <stdio.h>

int main() {
    int a, b, ucln, bcnn, i;
    printf("Nhap hai so a va b: ");
    scanf("%d%d", &a, &b);

    // T?m UCLN
    int min = (a < b) ? a : b;
    for (i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
            break;
        }
    }

    // T?m BCNN
    int max = (a > b) ? a : b;
    for (i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            bcnn = i;
            break;
        }
    }

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);

}
