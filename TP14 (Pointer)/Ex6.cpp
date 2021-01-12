#include <iostream>
using namespace std;
int main()
{
    int number[7],*p=number;
    cout << "Input 7 integer number: " ;
    for(int i=0; i<7; i++)
    {
        cin >> number[i] ;
    }
    cout << "\nDisplay all number:";
    for(int i=0;i<7; i++)
    {
        cout << " " << *(p+i);
    }
    cout << endl ;
}
