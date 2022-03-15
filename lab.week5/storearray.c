#include <stdio.h>
int main(){
    int i,x[10];
    int *pt;
    pt=x;
    for(i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    pt=x;
    for(i=0;i<10;i++){
        printf("%d\n",*(pt+i));
    }
    return 0;
}