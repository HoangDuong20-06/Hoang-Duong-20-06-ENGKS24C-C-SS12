#include <stdio.h>
//Ham tim so lon nhat trong mang
int timMax(int arr[], int n) {
    int max = arr[0]; // Gia dinh phan tu dau tien la so lon nhat
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Cap nhat gia tri lon nhat
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; ++i) {
    	printf("arr[%d]=",i);
        scanf("%d", &arr[i]);
    }
    int max = timMax(arr, n);
    printf("So lon nhat trong mang: %d\n", max);
    return 0;
}

