#include <iostream>
using namespace std;
bool check(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout << "Input the number: " ; cin >> num;
    cout << endl;
    if(check(num)==true)
    {
        cout << "It is an even number." << endl ;
    }
    else if(check(num)==false)
    {
        cout << "It is an odd number." << endl ;
    }
}
