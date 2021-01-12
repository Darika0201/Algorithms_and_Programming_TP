#include <iostream>
using namespace std;

int pow(int m , int n)
{
    if(n>1)
    {
        cout << "" << m << " x " ;
        return pow(m,n-1)*m ;
    }
    else if(n==1)
    {
        cout << "" << m ;
        return pow(m,n-1)*m ;
    }
    else if(n==0){ return 1 ; }
}
int main()
{
    int m,n;
    cout << "Input an integer m: " ;
    cin >> m ;
    cout <<"Input power n: " ;
    cin >> n ;
    cout << endl;
    cout << "" << m << "^" << n << " = " ;
    cout << " = " << pow(m,n) << endl ;

}
