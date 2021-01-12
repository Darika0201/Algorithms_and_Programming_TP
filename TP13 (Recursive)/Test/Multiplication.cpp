#include <iostream>
using namespace std;

int mul(int m,int n)
{
    if(n>1)
    {
        cout << "" << m << " + " ;
        return mul(m,n-1)+m;
    }
    else if(n==1)
    {
        cout << "" << m << " = " ;
        return mul(m,n-1)+m;
    }
    else { return 0 ; }
}
int main()
{
    int n,m;
    cout << "Input positive integer m: " ; cin >> m;
    cout << "Input positive integer n: " ; cin >> n;
    cout << endl << "" << m << "x" << "" << n << " = " ;
    cout << "" << mul(m,n) << endl ;
}
