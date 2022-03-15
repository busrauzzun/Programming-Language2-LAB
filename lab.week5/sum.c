#include <stdio.h>
int main(){
    int num1,num2;
    int *pt1,*pt2;

    pt1=&num1;
    pt2=&num2;

    scanf("%d %d",&num1,&num2);

    int sum=*pt1+*pt2;
    printf("%d",sum);
    return 0;

}

