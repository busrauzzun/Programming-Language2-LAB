#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	
	sum(n);
	printf("%d",sum(n));
	return 0;
}

int sum(int n){
	if(n>0){
		return (n+sum(n-1));
	}
	
}
