#include <stdio.h>
//Count the number of digits in an integer input by a user using recursive.
int digit(int n)
{
    int c=0,t;
    if(n!=0)
    {
        c++;
        return digit(n/10)+c;
    }
    else {return 0;}
}
int main()
{
    int n,tol;
    printf("Input integer: ");
    scanf("%d",&n);
    tol = digit(n);
    printf("\n%d have %d digits.\n",n,tol);
}
