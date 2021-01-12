#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n>1)
    {
        cout << "" << n << " * " ;
        return factorial(n-1)*n;
    }
    else if(n==1)
    {
        cout << "" << n << " = " ;
        return 1;
    }
}
int main()
{
    int n;
    cout << "Input the number: " ;
    cin >> n;
    cout << endl << "" << n << "! = " ;
    cout << "" << factorial(n) << endl ;
}
