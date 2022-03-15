#include <stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *pt;
	int i,sum=0;
	pt=a;
	
	for(i=0;i<10;i++){
		sum=sum+*(pt+i);
	}
	printf("%d",sum);
	
    return 0;
}