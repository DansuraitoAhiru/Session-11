#include <stdio.h>
int main() {
    int n, i;
    printf("Nhap so thang: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Khong du du lieu de tinh!\n");
        return 0;
    }

    int price[n];
    for (i = 0; i < n; i++) {
        printf("Gia thang %d: ", i + 1);
        scanf("%d", &price[i]);
    }

    int buyPrice = price[0];
    int minLoss = price[1] - buyPrice; 
    int bestMonth = 2;

    for (i = 2; i < n; i++) {
        int profit = price[i] - buyPrice;
        if (profit > minLoss) { 
            minLoss = profit;
            bestMonth = i + 1;
        }
    }

    if (minLoss >= 0) {
        printf("Nen ban vao thang %d: Ban se LAI %d\n", bestMonth, minLoss);
    } else {
        printf("Nen ban vao thang %d: Ban se LO %d\n", bestMonth, -minLoss);
    }

    return 0;
}
