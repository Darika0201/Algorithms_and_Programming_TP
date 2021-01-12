#include <iostream>
using namespace std;

int main()
{
    string name,sex, major;
    int age;

    cout << "What is your name?: " ; cin >> name;
    cout << "What is your sex?: " ; cin >> sex;
    cout << "How old are you?: " ; cin >> age;
    cout << "What is your major?: " ; cin >> major;

    if(sex == "M")
    {
        cout << endl << "Hi, Mr." << name << ". you are " << age << " year old and you are majoring in " << major << endl ;
    }
    else if(sex == "F")
    {
        cout << endl << "Hi, Mrs." << name << ". you are " << age << " year old and you are majoring in " << major << endl ;
    }


}
