#include <stdio.h>
#include <string.h>
int main() {
    char arr[][20] = {"ahiru", "thai", "congduy", "huydat", "thongsan","melon"};
    int size = sizeof(arr) / sizeof(arr[0]);
    char search[20];
    int i;
    int found = 0;

    printf("Nhap chuoi can tim: ");
    scanf("%s", search);

    for (i = 0; i < size; i++) {
        if (strcmp(arr[i], search) == 0) { // So sánh chu?i
            printf("Tim thay \"%s\" tai vi tri %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay chuoi \"%s\" trong mang!\n", search);
    }

    return 0;
}

