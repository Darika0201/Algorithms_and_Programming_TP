#include <iostream>
using namespace std;

int digit(int n)
{
    int c=0;
    if(n!=0)
    {
        c++;
        return digit(n/10)+c;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "Input the integer: ";
    cin >> n;
    cout << endl ;
    cout << "" << n << " has " << "" << digit(n) << " digit(s)." << endl ;
}
