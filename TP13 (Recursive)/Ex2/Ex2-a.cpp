#include <iostream>
using namespace std;
void displayStar(int n)
{
    if(n>0)
    {
        cout << "* " ; n--;
        displayStar(n);
    }
}
int main()
{
    int n;
    cout << "Input amount star: " ; cin >> n ;
    cout << endl ; displayStar(n) ; cout << endl;
}
