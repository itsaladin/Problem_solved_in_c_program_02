#include<stdio.h>

int main()
{
    struct student{
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    strcpy(one.name,"Tahmid Rafi");

    printf("ID: %d\n",one.id);
    printf("NAME: %s\n",one.name);

    return 0;
}
