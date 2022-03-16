#include <stdio.h>
#include <stdlib.h>


int main(){
    int *pt;
	int i,n;
	printf("How many numbers\n");
	scanf("%d",&n);
	
	pt=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		scanf("%d",pt+i);
		
	}
	
	pt=(int *)realloc(pt,sizeof(int)*(n+5));
	
	for(i=n;i<n+5;i++){
		scanf("%d",pt+i);
	}
	for(i=0;i<n+5;i++){
		printf("%d",*(pt+i));
	}
	
return 0;
}
