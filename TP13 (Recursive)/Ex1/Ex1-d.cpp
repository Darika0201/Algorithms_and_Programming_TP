#include <iostream>
using namespace std;

int sumSquare(int n)
{
    if(n>1)
    {
        cout << "" << n*n << " + " ;
        return sumSquare(n-1)+(n*n);
    }
    else if(n==1)
    {
        cout << "" << n << " = ";
        return sumSquare(n-1)+(n*n);
    }
    else if(n==0) { return 0; }
}

int main()
{
    int n;
    cout << "Input the number: " ;
    cin >> n;
    cout << endl ;
    cout << "The summation of square of " << n << " = " ;
    cout << "" << sumSquare(n) << endl ;
}
