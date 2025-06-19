#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, x;
    printf("Nhap n, x: ");
    scanf("%d %d", &n, &x);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int closeVal = arr[0], minDiff = abs(arr[0] - x);
    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - x);
        if (diff < minDiff) {
            minDiff = diff;
            closeVal = arr[i];
        }
    }

    printf("Phan tu gan x nhat la: %d (|%d - %d| = %d)\n", closeVal, closeVal, x, minDiff);
}

