#include <stdio.h>
#include <stdlib.h>

int tek (int a[],int n){

	if(n<0){
		return 0;
	}
	else{
		if(a[n]%2!=0){
			return (1+tek(a,n-1));
		}
		else{
			return (0+tek(a,n-1));	
		}
	}
		
}
int main() {
	int n;
	int a[10]={2,3,4,5,6,7,7,8,9,33};	
	
	
	printf("%d",tek(a,9));
	return 0;
}