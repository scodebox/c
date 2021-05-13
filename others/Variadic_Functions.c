#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

int  sum (int count,...) {
    int sum=0;
    va_list values;
    va_start(values,count);
    int i;
    for(i=0;i<count;i++){
        sum+=va_arg(values,int);
    }
    va_end(values);
    return sum;
}

main(){
	
	printf("%d\n",sum(1,2,3,4));
		
}
