#include<stdio.h>

int main()
{
    int n1, n3;

    scanf("%d",&n1);

    if(n1 & 1){
        printf("%d is odd\n",n1);
    }
    else{
        printf("%d is even\n",n1);
    }
    return 0;
}

