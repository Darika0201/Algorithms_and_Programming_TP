#include <iostream>
using namespace std;
int main()
{
    int n,*p;
    p=&n;
    cout << "\nInput the number: " ; cin >> n;
    *p=*p+5;
    cout << "\nThe answer = " << n << endl ;
}
