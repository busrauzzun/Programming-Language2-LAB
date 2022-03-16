#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *pt;
    
    pt=(char*)malloc(sizeof(char)*10);
    
    strcpy(pt,"busra uzun");
    
    int i;
    
    for(i=0;i<10;i++){
    	printf("%c",*(pt +i));
	}
   
return 0;
}