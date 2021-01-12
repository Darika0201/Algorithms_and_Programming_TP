#include <iostream>
using namespace std;
void minimum(int num[100])
{
    int mini=num[0];
    for(int i=0; i<7; i++)
    {
        if(mini>num[i])
        {
            mini=num[i];
        }
    }
    cout << "The minimum number is " << mini << endl ;
}
void maximum(int num[100])
{
    int maxi=num[0];
    for(int i=0; i<7; i++)
    {
        if(maxi<num[i])
        {
            maxi=num[i];
        }
    }
    cout << "The maximum number is " << maxi << endl ;
}
int main()
{
    int num[100];
    cout << "Input the number: ";
    for(int i=0; i<7; i++)
    {
        cin >> num[i] ;
    }
    cout << endl ;
    minimum(num);
    maximum(num);

}
