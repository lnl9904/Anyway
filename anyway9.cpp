#include <stdio.h>

int main() {
    float a, b, c;

    // Nh?p 3 c?nh
    printf("Nhap 3 canh tam giac:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    // Ki?m tra ði?u ki?n tam giác
    if (a > 0 && b > 0 && c > 0 &&
        a + b > c &&
        a + c > b &&
        b + c > a) {
        printf("Day la 3 canh cua mot tam giac.\n");
    } else {
        printf("Day khong phai la 3 canh cua mot tam giac.\n");
    }

    return 0;
}

