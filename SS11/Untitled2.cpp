#include <stdio.h>
int main(){
	int arr[]={2,36,76,88,999,6764,73652,777};
	int n=sizeof(arr)/sizeof(int);
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	}
	printf("Mang sau khi sap xep theo thu tu tang dan la: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}
