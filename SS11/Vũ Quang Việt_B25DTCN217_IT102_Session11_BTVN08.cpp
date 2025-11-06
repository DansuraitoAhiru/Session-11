#include <stdio.h>
int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0;
    int result = arr[0];

    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            result = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d\n", result);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}
