#include<stdio.h>

int count = 0;

int func(int n)
{
    if(n < 0){
        return;
    }
    count += n;
    return n * func(n - 1);
}

int main()
{
    int n;
    scanf("%d",&n);

    func(n);
    printf("The sum is : %d\n",count);

    return 0;
}
