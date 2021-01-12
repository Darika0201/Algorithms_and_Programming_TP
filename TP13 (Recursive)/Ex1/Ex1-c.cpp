#include <iostream>
using namespace std;

int sumSuite(int n)
{
    if(n>1)
    {
        cout << " " << n << " +";
        return sumSuite(n-1)+n;
    }
    else if(n==1)
    {
        cout << " " << n << " =";
        return sumSuite(n-1)+n;
    }
    else{ return 0; }
}
int main()
{
    int n;
    cout << "Input the number: ";
    cin >> n;
    cout << endl ;
    cout << "The Summation of suite of " << n << " =" ;
    cout <<" "<< sumSuite(n) << endl ;

}
