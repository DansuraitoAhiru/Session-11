#include <stdio.h>
int main() {
    int arr[] = {12, 45, 23, 45, 67, 89, 89, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        printf("Mang khong du phan tu de tim phan tu lon thu hai!\n");
        return 0;
    }

    int max1, max2; // max1: l?n nh?t, max2: l?n th? hai
    int i;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max1 == max2) {
        printf("Khong co phan tu lon thu hai trong mang!\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}
