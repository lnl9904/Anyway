#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool toan_le = true;
    printf("Nhap n: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            toan_le = false;
            break;
        }
        temp /= 10;
    }

    if (toan_le)
        printf("%d co toan chu so le.\n", n);
    else
        printf("%d KHONG co toan chu so le.\n", n);

    return 0;
}
