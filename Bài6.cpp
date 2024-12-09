#include <stdio.h>
#include <stdbool.h>
// Ham kiem tra so hoan hao
int soHoanHao(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1; // Bat dau tu 1 vi 1 là uoc so cua moi so
    // Tim tat ca cac uoc cua n va tinh tong
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {
                sum += i + n / i;
            } else {
                sum += i;
            }
        }
    }
    // Kiem tra xem tong cac uoc co bang chinh no khong
    return sum == n;
}

int main() {
    int num1, num2;
    // Nhap hai so nguyen tu ban phim
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    // Kiem tra va in ket qua cho so thu nhat
    if (soHoanHao(num1)) {
        printf("%d la so hoan hao\n", num1);
    } else {
        printf("%d Khong phai la so hoan hao\n", num1);
    }
    // Kiem tra va tin ket qua cho so thu hai
    if (soHoanHao(num2)) {
        printf("%d la so hoan hao\n", num2);
    } else {
        printf("%d khong phai la so hoan hao\n", num2);
    }
    return 0;
}
