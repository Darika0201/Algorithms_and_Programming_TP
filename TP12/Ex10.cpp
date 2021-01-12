#include <iostream>
using namespace std ;
int main()
{
    int num[100];
    int mini,maxi;
    cout << "Input the number: " ;
    for(int i=0; i<7; i++)
    {
        cin >> num[i] ;
    }
    mini=num[0];
    maxi=num[0];
    for(int i=0; i<7; i++)
    {
        if(mini>num[i])
        {
            mini=num[i];
        }
        if(maxi<num[i])
        {
            maxi=num[i];
        }
    }
    cout << endl ;
    cout << "The minimum number is " << mini ;
    cout << "\nThe maximum number is " << maxi << endl ;
}
