#include <iostream>
using namespace std;

void swap2numbers(int *p1, int *p2)
{
    int swap = *p1;
    *p1=*p2;
    *p2= swap;
}
int main()
{
    int n1,n2;
    cout << "Input the n1: " ; cin >> n1;
    cout << "Input the n2: " ; cin >> n2;
    swap2numbers(&n1,&n2);
    cout << "\nAfter swap: \nn1 = " << n1 ;
    cout << "\nn2 = " << n2 << endl;
}
