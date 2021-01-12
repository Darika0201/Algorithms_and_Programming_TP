#include <iostream>
using namespace std;
int sumDigit(int n)
{
    if(n!=0)
    {
        return sumDigit(n/10) + n%10;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Input the number: " ; cin >> n ;
    cout << "\nThe sum of digits in a number is " << sumDigit(n) << endl ;
}
