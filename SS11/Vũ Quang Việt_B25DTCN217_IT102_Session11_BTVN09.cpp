#include <stdio.h>
int main() {
    int arr[] = {1, 2, 5, 2, 3, 1, 5, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Mang sau khi loai bo trung lap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
