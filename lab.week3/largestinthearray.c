#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[]={1,2,3,4,5,6,7,8,9,10};
	
	max(a,10);
	printf("%d",max(a,10));
	return 0;
}

int max(int a[],int n){
	int maximum=a[0];
	
	
	while(n>0){
	
	if(a[n-1]>maximum){
		maximum=a[n-1];
		
		max(a,n-1);
	}
	return maximum;	 
	}

}