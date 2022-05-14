#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,j;
	printf("Enter number\n");
	scanf("%d",&n);
	int*pt;
	int i=1;
	pt=(int*)malloc(sizeof(int)*1);
	
	while(n!=0){
	
		pt=(int*)realloc(pt,i*sizeof(int));
		*(pt+i-1)=n;
		
		scanf("%d",&n);
		i++;
		
	}
	
	for(j=0;j<i-1;j++){
		printf("%d\n",*(pt+j));
	}
	
	free(pt);
	
	return 0;
}