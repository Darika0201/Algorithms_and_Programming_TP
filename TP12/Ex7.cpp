#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Input the character: " ; cin >> ch ;
    cout << endl ;
    if(ch>=48 && ch<=57)
    {
        cout << "Character is a number." << endl ;
    }
    else if(ch>=65 && ch<=90)
    {
        cout << "Character is an uppercase." << endl ;
    }
    else if(ch>=97 && ch<=122)
    {
        cout << "Character is a lowercase." << endl ;
    }
    else
    {
        cout << "It is neither a number nor a letter." << endl ;
    }
}
