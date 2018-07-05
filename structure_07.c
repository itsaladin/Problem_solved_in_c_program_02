#include<stdio.h>
#include<string.h>

typedef struct{
    int day;
    int month;
    int year;
}datetype;

typedef struct{
    char bangla[20];
    char english[20];
    char father[20];
    char mother[20];
}nametype;

typedef struct{
    int id;
    nametype name;
    datetype date;
}studenttype;

int main()
{
    studenttype student[1];
    int i, n = 1;

    for(i = 0; i < n; i++){
        printf("Enter the bangla name: ");
        scanf("%s",&student[i].name.bangla);
        printf("Enter the english name: ");
        scanf("%s",&student[i].name.english);

        printf("Enter the father bangla name: ");
        scanf("%s",&student[i].name.father);

        printf("Enter the mother bangla name: ");
        scanf("%s",&student[i].name.mother);

        printf("Enter the date of birth day: ");
        scanf("%d",&student[i].date.day);

        printf("Enter the date of birth month: ");
        scanf("%d",&student[i].date.month);

        printf("Enter the date of birth year: ");
        scanf("%d",&student[i].date.year);

        printf("Enter the ID NO: ");
        scanf("%d", &student[i].id);
        printf("\n");
    }

    for(i = 0; i < n; i++){
        printf("---------------------------------------------------------\n");
                    printf("|\t  Gonoprojatontry Bangladesh Sorkar \t\t|\n");
                printf("|\   Government of the Peoples's Republic of Bangladesh \t|\n");
                   printf("|\tNATIONAL ID CARD / jatio poricoy pottoro \t|\n");
        printf("---------------------------------------------------------\n");
                printf("|\tName: %s\t\t\t\t\t|\n",student[i].name.bangla);
                printf("|\tName: %s\t\t\t\t\t|\n",student[i].name.english);
                printf("|\tFather: %s\t\t\t\t\t|\n",student[i].name.father);
                printf("|\tMother: %s\t\t\t\t\t|\n",student[i].name.mother);
                printf("|\tDate of Birth: %d-%d-%d\t\t\t|\n",student[i].date.day,student[i].date.month,student[i].date.year);
                printf("|\tID NO: %d\t\t\t\t|\n",student[i].id);
        printf("---------------------------------------------------------\n");
    }

    return 0;
}
