#include <iostream>
using namespace std;
int main()
{
    int n1=5,n2=10;
    int *p1,*p2;
    p1=&n1; p2=&n2;
    cout << "\nThe address of n1 by using p1 = " << p1 << endl;
    cout << "\nThe value of n1 by using p1 = " << *p1 << endl;
    cout << "\nThe address of n2 by using p2 = " << p1 << endl;
    cout << "\nThe value of n2 by using p2 = " << *p2 << endl;

}
