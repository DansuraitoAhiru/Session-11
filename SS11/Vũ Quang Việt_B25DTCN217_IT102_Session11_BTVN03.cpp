#include <stdio.h>
int main(){
	int arr[]={1,2,4,5,7,8,22,34,56,78,69,8384,45433};
	int n=sizeof(arr)/sizeof(int);
	int left,mid,right;
	int searchValue;
	int found=0;
	printf("Nhap gia tri can tim: ");
	scanf("%d", &searchValue);
	
	left=0;
	right=n-1;
	while(left<=right){
		mid=left+(right-left)/2;
		if(arr[mid]==searchValue){
			found=1;
			break;
		} else if(arr[mid]<searchValue){
			left=mid+1;
		} else {
			right=mid-1;
		}
	}
	if(found){
		printf("\nPhan tu co chi so %d co gia tri bang %d", mid, searchValue);
	} else {
		printf("\nKo tim thay gia tri bang %d", searchValue);
	}
}
