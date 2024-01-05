#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac so nguyen vao mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int so_chan_cuoi = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
           so_chan_cuoi= arr[i];
        }
    }

    if (so_chan_cuoi != -1) {
        printf("So chan cuoi cung trong mang la: %d\n", so_chan_cuoi);
    } else {
        printf("Khong co so chan\n");
    }

    return 0;
}

