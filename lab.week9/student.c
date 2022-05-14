#include <stdio.h>
int main(){
    struct student {
        char name[40];
        char surname[40];
        int number;
        int midterm;

    };
    struct student students[10];

    int i;
    for(i=0;i<3;i++){
        printf("Name : ");
        scanf("%s",students[i].name);
        printf("Surname : ");
        scanf("%s",students[i].surname);
        printf("Number: ");
        scanf("%d",&students[i].number);
        printf("midterm: ");
        scanf("%d",&students[i].midterm);  
    }
   
   for(i=0;i<3;i++){
        printf("%s\t%s\t%d\t%d",students[i].name,students[i].surname,students[i].number,students[i].midterm);
        printf("\n");
    }
    
    return 0;
}

