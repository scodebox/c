#include <stdio.h> 
#include <stdlib.h> 

int main(){
	float min=-1;
	float max=1;
	for (int i=0;i<40;i++)
		printf("%d -> %f\n",i,min+(rand()/(float)RAND_MAX)*( max-min));

	return 0;
} 