#include <stdio.h>

//Calculate the summation 1+2+3+…+n using recursive where n is a number input by a user.

int sum(int n)
{
    if(n>=1)
    {
        printf("%d+",n);
        return sum(n-1)+n;
    }
    else if(n==0)
    {
        printf("%d =",n);
        return 0;
    }
}

int main()
{
    int n;
    printf("Input the number: ");
    scanf("%d",&n);
    printf("\n");
    printf(" %d\n",sum(n));
}
