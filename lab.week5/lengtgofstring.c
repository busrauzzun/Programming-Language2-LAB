#include <stdio.h>
int main(){
	char *a="Karabuk University";
	int k=1;
	
	while(*a!='\0'){
		k++;
		a++;
	}
    printf("%d",k);
    
    return 0;
}