#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n;
	printf("Enter number");
	scanf("%d",&n);
	basamak(n);
	printf("%d",basamak(n));
	
	return 0;
}

int basamak (int n){
	
	if(n>0){
		
		return (n%10+ basamak(n/10));
		
		
	}
	
}