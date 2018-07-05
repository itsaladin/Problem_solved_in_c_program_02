#include<stdio.h>
#include<limits.h>

int main()
{
    int n = sizeof(int) * CHAR_BIT;

    printf("%d",n);
    return 0;
}
