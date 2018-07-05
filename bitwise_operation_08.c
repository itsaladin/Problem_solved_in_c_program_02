#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x > 0 && (x & (x - 1)) == 0){
        printf("%d is a power of 2\n",x);
    }
    else{
        printf("%d is NOT a  power of 2\n",x);
    }
}
