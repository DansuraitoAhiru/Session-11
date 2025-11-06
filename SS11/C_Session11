#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[100]={4,7,98,34,67,9,11};
	int n,i,j,temp;
	int currentIndex=7;
	int choice;
	int sum;
	float avg;
	int max,min;
	int sortChoice;
	int sort=0;
	int maxIndex;
	int insertValue;
	int left,right,mid,searchValue,found=0,find=0;
	int indexDelete;
	int indexInsert;
	int deleteValue;
	
	do{
		printf("\n***************MENU*******************");
		printf("\n1. Nhap gia tri n phan tu");
		printf("\n2. In gia tri cac phan tu trong mang");
		printf("\n3. Tinh va in ra tong, trung binh cong cua cac phan tu trong mang");
		printf("\n4. In ra gia tri lon nhat,nho nhat cua mang");
		printf("\n5. Sap sep mang");
		printf("\n6. Tim kiem gia tri theo gia tri nhap vao tu ban phim");
		printf("\n7. Xoa phan tu theo chi so phan tu nhap tu ban phim");
		printf("\n8. Chen 1 phan tu vao mang voi chi so va gia tri nhap tu ban phim");
		printf("\n9. Xoa cac phan tu co gia tri bang gia tri nhap tu ban phim");
		printf("\nLua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				do{
					printf("Nhap so phan tu (1-93): ");
					scanf("%d", &n);
				} while (n<0 || n>93);
				for(i=0;i<n;i++){
				  printf("Nhap phan tu thu %d: ",currentIndex);
				  scanf("%d", &arr[currentIndex]);
				  currentIndex++;
				}
				  break;
			case 2:
				printf("Mang sau khi nhap la: ");
				for(i=0;i<currentIndex;i++){
					printf("%d ", arr[i]);
				}
				printf("\n");
	            break;
	        case 3:
	        	sum=0;
	        	for(i=0;i<currentIndex;i++){
	        		sum+=arr[i];
	        	}
	        	printf("Tong cac phan tu trong mang: %d",sum);
	        	avg=sum/(currentIndex*1.0);
	        	printf("\nTrung binh cong cac phan tu trong mang: %.2f",avg);
	        	break;
	        case 4:
	        	max=arr[0],min=arr[0];
	        	for(i=0;i<currentIndex;i++){
	        		if(max<arr[i]){ max=arr[i];}
	        		if(min>arr[i]){ min=arr[i];}
	        	}
	        	printf("\nGia tri lon nhat trong mang la: %d", max);
	        	printf("\nGia tri nho nhat trong mang la: %d", min);
	        	break;
	        case 5:
	        	printf("1. Sap xep tang dan theo BBsort\n");
    		    printf("2. Sap xep giam dan theo Selesort\n");
    		    printf("3. Sap xep tang dan theo Insesort\n");
    		    printf("Ban se chon: ");
    		    scanf("%d", &sortChoice);
    		    switch(sortChoice){
    		    	case 1:
    		    		for(i=0;i<currentIndex-1;i++){
    		    			for(j=0;j<currentIndex-1-i;j++){
    		    				if(arr[j]>arr[j+1]){
    		    					temp=arr[j];
    		    					arr[j]=arr[j+1];
    		    					arr[j+1]=temp;
    		    				}
    		    			}
    		    		}
    		    		printf("\nMang sau khi sap xep tang dan la: ");
    		    		for(i=0;i<currentIndex;i++){
    		    			printf("%d ", arr[i]);
    		    		}
    		    		sort=1;
    		    		break;
    		    	case 2:
    		    		for(i=0;i<currentIndex-1;i++){
    		    			maxIndex=i;
    		    			for(j=i+1;j<currentIndex;j++){
    		    				if(arr[maxIndex]<arr[j]){
    		    					maxIndex=j;
    		    				}
    		    			}
    		    			if(i!=maxIndex){
    		    				temp=arr[i];
    		    				arr[i]=arr[maxIndex];
    		    				arr[maxIndex]=temp;
    		    			}
    		    		}
    		    		printf("Mang sau khi sap xep giam san la: ");
    		    		for(i=0;i<currentIndex;i++){
    		    			printf("%d ", arr[i]);
    		    		}
    		    		sort=1;
    		    		break;
    		    	case 3:
    		    		for(i=1;i<currentIndex;i++){
    		    			insertValue=arr[i];
    		    			j=i-1;
    		    			while(insertValue<arr[j] && j>=0){
    		    				arr[j+1]=arr[j];
    		    				j--;
    		    			}
    		    			arr[j+1]=insertValue;
    		    		}
    		    		printf("Mang sau khi sap xep tang dan la: ");
    		    		for(i=0;i<currentIndex;i++){
    		    			printf("%d ", arr[i]);
    		    		}
    		    		sort=1;
    		    		break;
    		    		
    		    	default:
    		    		printf("\nKo co lua chon %d", sortChoice);
    		    }
    		    break;
    		case 6:
    			printf("Nhap so can tim: ");
    			scanf("%d", &searchValue);
    			if(sort){
    				left=0;
    				right=currentIndex-1;
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
    					printf("\nPhan tu chi so %d bang gia tri %d", mid, searchValue);
    				} else {
    					printf("\nKo co phan tu nao co gia tri bang %d", searchValue);
    				}
    			} else {
    				for(i=0;i<currentIndex;i++){
    				  if(arr[i]==searchValue){
    				  	find = 1;
    				  	printf("Phan tu chi so %d co gia tri bang %d", i, searchValue);
    				  }
    				}
    				if(!find){
    					printf("\nKo co phan tu nao co gia tri bang %d", searchValue);
    				}
    			}
    			break;
    		case 7:{
    			printf("Nhap chi so can xoa: ");
    			do{
    				scanf("%d", &indexDelete);
    				if(indexDelete>=0 && indexDelete<currentIndex){
    					break;
    				}
    				printf("Chi so phan tu phai nam trong khoang [0;%d]: ", currentIndex-1);
    			} while(1);
    			int newNumber[currentIndex-1];
    			for(i=0;i<currentIndex-1;i++){
    				if(i<indexDelete){
    					newNumber[i]=arr[i];
    				}else{
    					newNumber[i]=arr[i+1];
					}
				}
				printf("Mang sau khi xoa phan tu la: ");
				for(i=0;i<currentIndex-1;i++){
					printf("%d ", newNumber[i]);
				}
				break;
			}
			case 8:
                printf("Nhap chi so muon chen (0 - %d): ", currentIndex);
                do {
                    scanf("%d", &indexInsert);
                    if(indexInsert>=0 && indexInsert<=currentIndex){
					    break;
					}
                    printf("Nhap lai chi so (0-%d): ", currentIndex);
                } while(1);

                printf("Nhap gia tri muon chen: ");
                scanf("%d", &insertValue);

                for(i=currentIndex; i>indexInsert; i--){
                    arr[i] = arr[i-1];
                }
                arr[indexInsert] = insertValue;
                currentIndex++;

                printf("Mang sau chen: ");
                for(i=0;i<currentIndex;i++){
                    printf("%d ", arr[i]);
                }
                break;

            case 9: 
                printf("Nhap gia tri muon xoa: ");
                scanf("%d", &deleteValue);

                for(i=0;i<currentIndex;i++){
                    if(arr[i]==deleteValue){
                        for(j=i;j<currentIndex-1;j++){
                            arr[j] = arr[j+1];
                        }
                        currentIndex--;
                        i--; 
                    }
                }

                printf("Mang sau khi xoa: ");
                for(i=0;i<currentIndex;i++){
                    printf("%d ", arr[i]);
                }
                break;
			case 10:
				exit(0);
			}
			
	} while (choice!=10);
}
	
