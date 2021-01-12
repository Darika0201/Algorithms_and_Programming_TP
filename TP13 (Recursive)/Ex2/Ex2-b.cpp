#include <iostream>
using namespace std;

void displayNumbers(int n)
{
    if(n>0)
    {
        cout << " " << n--;
        displayNumbers(n);
    }
    return;
}

int main()
{
    int n ;
    cout << "Input the number: " ; cin >> n ;
    cout << "\n" ; displayNumbers(n) ; cout << endl ;

}
