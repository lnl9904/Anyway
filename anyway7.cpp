#include <stdio.h>
#include <stdbool.h>

// Hàm ki?m tra nãm nhu?n
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Tr? v? s? ngày trong tháng
int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Tháng không h?p l?
    }
}

int main() {
    int day, month, year;

    // Nh?p d? li?u
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    int max_day = getDaysInMonth(month, year);

    // Ki?m tra ngày h?p l?
    if (max_day == 0 || day < 1 || day > max_day) {
        printf("Ngay khong hop le!\n");
        return 1;
    }

    // Tính ngày k? ti?p
    if (day < max_day) {
        day++;
    } else {
        day = 1;
        if (month < 12) {
            month++;
        } else {
            month = 1;
            year++;
        }
    }

    // In k?t qu?
    printf("Ngay ke tiep la: %02d/%02d/%d\n", day, month, year);

    return 0;
}

