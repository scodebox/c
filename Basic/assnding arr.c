#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
	int i,j,t;
	printf("Enter 5 values : ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(arr[i]>arr[j]){
				t=arr[j];
				arr[j]=arr[i];
				arr[i]=t;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%2d",arr[i]);
	}


	getch();
	return 0;
}

