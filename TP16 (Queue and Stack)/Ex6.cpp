#include <iostream>
#include "MyStack.h"
using namespace std;
int main()
{
    list *ls;
    ls = createlist(ls);
    int n, binary;
    cout << "Input the number: "; cin >> n;
    cout << "\nThe Binary number is: ";
    while(n > 0){
        binary = n%2;
        enstack(ls,binary);
        n = n/2;
    }
    displayStack(ls);
}
