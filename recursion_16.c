#include<stdio.h>
#include<string.h>

char revrs[10];

int func(char s)
{
    if(s < 0){
        return 1;
    }
    strcpy(revrs,"s[10]");
    printf("%s\n",revrs);
    return func(s - 1);
}

int main()
{
    char s[10];
    scanf("%s",&s);
    printf("%s",s);
    func(s);
    printf("Reverse is : %s\n",revrs);

    return 0;
}
