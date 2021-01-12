#include <iostream>
using namespace std;
void sum1(double *sum, int n)
{
    *sum=0;
    for(int i=1; i<=n; i++)
    {
        *sum+= 1.0/ i ;
    }
    cout << "\nThe summation from 1/1 to 1/" << n << " by sum1 = " << *sum << endl ;
}
double sum2(int n)
{
    double sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+= 1.0/i;
    }
    cout << "\nThe summation from 1/1 to 1/" << n << " by sum2 = " << sum << endl ;
}
int main()
{
    int n;
    double sum;
    cout << "Input the number: "; cin >> n;
    sum1(&sum,n);
    sum2(n);
}
