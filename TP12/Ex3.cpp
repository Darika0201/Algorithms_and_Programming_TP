#include <iostream>
using namespace std;

int main()
{
    int age;
    string sex;
    cout << "Input your age: " ; cin >> age;
    cout << "Input your sex: " ; cin >> sex;
    cout << endl ;
    if(sex=="M" && age>=18 )
    {
        cout << "He needs to pay tax." << endl  ;
    }
    else if(sex=="F" && age>=20)
    {
        cout << "She needs to pay tax." << endl ;
    }
    else
    {
        cout << "No need to pay." << endl ;
    }
}
