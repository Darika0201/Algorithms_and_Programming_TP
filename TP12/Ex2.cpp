#include <iostream>
using namespace std;

int main()
{
    string ch;
    cout << "Input a character: " ; cin >> ch ;
    if(ch=="A" || ch=="E" || ch=="I" || ch=="O" || ch=="U" )
    {
        cout << endl ;
        cout << "It is vowel." << endl ;
    }
    else
    {
        cout << endl ;
        cout << "It is consonant." << endl ;
    }
}
