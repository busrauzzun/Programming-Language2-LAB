#include <stdio.h>
#include <stdlib.h>

struct student {
        char name[40];
        char surname[40];
        int number;
        int midterm;

    };

int main(){
    struct student *ptr;
    ptr=(struct student*)malloc(1*sizeof(struct student));
    int i;

    for(i=0;i<3;i++){
        ptr=(struct student*)realloc(ptr,(i+1)*sizeof(struct student));
        printf("Name : ");
        scanf("%s",(ptr+i)->name);
        printf("Surname : ");
        scanf("%s",(ptr+i)->surname);
        printf("Number: ");
        scanf("%d",&(ptr+i)->number);
        printf("midterm: ");
        scanf("%d",&(ptr+i)->midterm); 
    }
    for(i=0;i<3;i++){
        printf("%s\t%s\t%d\t%d",(ptr+i)->name,(ptr+i)->surname,(ptr+i)->number,(ptr+i)->midterm);
        printf("\n");
    }
    
return 0;
}