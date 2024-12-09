#include<stdio.h>
#include <stdio.h>
// Ham tinh giai thua so nguyen
long long giaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giaiThua(n - 1);
    }
}

int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    long long result = giaiThua(number);
    printf("Giai thua cua %d la %lld\n", number, result);
    return 0;
}

