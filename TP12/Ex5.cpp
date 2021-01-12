#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "Input the number: " ; cin >> n;
    cout << endl ;
    for(int i=0; i<=n; i++)
    {
        sum+=i;
    }
    cout << "The summation of numbers from 1 to " << n << " is " << sum << endl ;

}
