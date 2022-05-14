#include <stdio.h>
#include <stdlib.h>
void fonk(int a,int* tek,char *cift){
   
    int t,k=0,l=0,i;
    while(a>0){
        t=a%10;

        if(t%2==0){
            *(cift+k)=t;
            k++;
            cift=(char*)realloc(cift,k*sizeof(char));
         }

         else{
             *(tek+l)=t;
             l++;
             tek=(int*)realloc(tek,l*sizeof(int));
         }

		a=a/10;

     }

     for(i=0;i<k;i++){
         printf("%d",*(cift+i));


     }
}

int main(){

    int n;
    printf("Enter student number\n");
    scanf("%d",&n);

    char *cift;
    int * tek;

    tek=(int*)malloc(sizeof(int)*1);
    cift=(char*)malloc(sizeof(char)*1);

    fonk(n,tek,cift);

    return 0;
}