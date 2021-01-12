#include <iostream>
using namespace std;

int sum(int n)
{
    if(n>1)
    {
        cout << " " << n << " +";
        return sum(n-1)+n;
    }
    else if(n==1)
    {
        cout << " " << n << " =";
        return sum(n-1)+n;
    }
    else{ return 0; }
}
int main()
{
    int n;
    cout << "Input the number: ";
    cin >> n;
    cout << endl ;
    cout <<" "<< sum(n) << endl ;
}
