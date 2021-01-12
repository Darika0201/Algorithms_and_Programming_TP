#include <iostream>
using namespace std;

int power(int m , int n)
{
    if(n>1)
    {
        return power(m,n-1)*m ;
    }
    else if(n==1)
    {
        return power(m,n-1)*m ;
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
    cout << "" << m << "^" << n << " = " << power(m,n) << endl ;

}
