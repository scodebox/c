#include<stdio.h>

int input_array(int *a){
	unsigned int size;
	printf("\nENTER ARRAY SIZE : ");
	scanf("%d",&size);	
	int i;
	printf("\nENTER %d ARRAY ELEMENT : ",size);
	for(i=0;i<size;i++)
		scanf("%d",(a+i));
	return size;
}

int show_array(int *a,unsigned int size){
	int i;
	static int count;
	printf("\nPermutation (%d)  : ",++count);
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	return 1;
}

void swap(int *list, int position1, int position2){
	int temp = list[position1];
	list[position1] = list[position2];
	list[position2] = temp;
}

void reverse(int *list, int start, int end){
	while(start<end){
		swap(list,start,end);
		++start;
		--end;
	}
}

int next_permutation(int *list, int size){
	int inverse_position=size-1;
	
	while(inverse_position >= 0 && list[inverse_position-1] >= list[inverse_position--]);
	
	if(inverse_position >= 0){
		int next_greater=size-1;
		while(next_greater>=0 && list[next_greater] <= list[inverse_position])
			--next_greater;
		
		swap(list,next_greater,inverse_position);
		//printf(" >> %d",next_greater);
	}
	
	reverse(list,inverse_position+1,size-1);
}


main(){
	
	int list[100];
	int size = input_array(list);
	show_array(list,size);
	
	while(1){
		getch();
		next_permutation(list,size);
		show_array(list,size);
	}
	
}
