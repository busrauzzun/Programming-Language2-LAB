#include <stdio.h>
#include <stdlib.h>
int sum(int n){
	if(n>0){
		return (n+sum(n-1));
	}
	
}

int main() {
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	
	
	printf("%d",sum(n));
	return 0;
}

