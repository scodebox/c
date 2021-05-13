#include<stdio.h>
#include<string.h>

void swap(char *position1, char *position2){
	char temp;
	temp = *position1;
	*position1 = *position2;
	*position2 = temp;
}

int check(char *obj, int start, int end){
	int i;
	for(i=start;i<end;i++)
		if(obj[i]==obj[end])
			return 0;
	return 1;
}

void permute(char *obj, int start, int end){
	static int count;
	if(start == end){
		printf("%d -> %s\n",++count,obj);
	}else{
		int i;
		for(i=start;i<end;i++){
			if(check(obj,start,i)){
				swap(obj+start,obj+i);
				permute(obj,start+1,end);
				swap(obj+start,obj+i);
			}
		}
	}
}

main(){
	char str[] = "ABB";
	permute(str,0,strlen(str));
}
