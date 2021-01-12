#include <iostream>
using namespace std;
int main()
{
    int n,fac=1;
    cout << "Input the number: " ; cin >> n ;
    cout << endl ;
    for(int i=1; i<=n; i++)
    {
        fac*=i;
    }
    cout << "The factorial of " << n << " is " << fac << endl ;
}
