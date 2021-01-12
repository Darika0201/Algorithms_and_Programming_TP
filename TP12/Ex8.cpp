#include <iostream>
using namespace std;
int main()
{
    for(int i=8; i<1000; i++)
    {
        if(i%2!=0)
        {
            if(i==11 || i==17 || i==21)
            {
                continue;
            }
            cout << " " << i ;
        }
    }
    cout << endl ;
}
