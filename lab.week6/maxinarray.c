#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,*pt;
    printf("How many numbers\n");
    scanf("%d",&n);
    
    pt=(int *)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++){
    	scanf("%d",pt+i);
   	}
   	int max=*pt;
   	
   	for(i=1;i<n;i++){
   		if(*(pt+i)>max){
   			max=*(pt+i);
		   }
	   }
   	
   	printf("%d",max);


return 0;
}
