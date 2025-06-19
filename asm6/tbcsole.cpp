#include <stdio.h>

int main(void) {
    int n, i = 0, sumOdd = 0, countOdd = 0;
    printf("Nhap so luong phan tu: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Gia tri khong hop le!\n");
        return 1;
    }

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    i = 0;
    while (i < n) {
        if (arr[i] % 2 != 0) {
            sumOdd += arr[i];
            countOdd++;
        }
        i++;
    }

    if (countOdd == 0) {
        printf("Khong co so le nao trong mang.\n");
    } else {
        double avg = (double)sumOdd / countOdd;
        printf("Trung binh cong cac so le: %.2f\n", avg);
    }
    return 0;
}
