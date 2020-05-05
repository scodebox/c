#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	int n;
	scanf("%d",&n);

	char **str = (char**)calloc(n,sizeof(char*));
	
	int i,j;
	for(i=0;i<n;++i){
		char *new_str = (char*)calloc(1024,sizeof(char));
		scanf("%s",new_str);
		*(str+i) = new_str;
	}
	
	//sorting.
	for(i=0;i<n-1;i++){
		for(j=i;j<n;++j){
			if(strcmp(str[i],str[j])>0){
				char *temp;
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	
	printf("DISPLAY : \n");
	for(i=0;i<n;i++){
		printf(" %s\n",str[i]);
	}
	
}

