#include <iostream>
using namespace std;
struct customer
{
    string name,sex;
    string district;
    string city;
    string houseNo;
    string cusID;
    int citiID;
}cus[100];
void display1()
{
    string id;
    int i;
    cout << "\nInput customer ID: " ; cin >> id;
    for(i=0; i<10; i++)
    {
        if(id==cus[i].cusID)
        {
            cout << "\n" << i+1 << ". Name: " << cus[i].name ;
            cout << "\n" << i+1 << ". Sex: " << cus[i].sex ;
            cout << "\n" << i+1 << ". ID: " << cus[i].cusID ;
            cout << "\n" << i+1 << ". Citizen ID: " << cus[i].citiID ;
            cout << "\n" << i+1 << ". House number: " << cus[i].houseNo ;
            cout << "\n" << i+1 << ". District: " << cus[i].district ;
            cout << "\n" << i+1 << ". City/Province: " << cus[i].city ;
            cout << endl ;
            break;
        }
    }
    if(id!=cus[i].cusID)
    {
        cout << "\nThis id is not found.\n" ;
    }
}
void display2()
{
    for(int i=0; i<10; i++)
    {
        cout << "\n" << i+1 << ". Name: " << cus[i].name ;
        cout << "\n" << i+1 << ". Sex: " << cus[i].sex ;
        cout << "\n" << i+1 << ". ID: " << cus[i].cusID ;
        cout << "\n" << i+1 << ". Citizen ID: " << cus[i].citiID ;
        cout << "\n" << i+1 << ". House number: " << cus[i].houseNo ;
        cout << "\n" << i+1 << ". District: " << cus[i].district ;
        cout << "\n" << i+1 << ". City/Province: " << cus[i].city ;
        cout << endl ;
    }
}
int main()
{
    int n;
    for(int i=0; i<10; i++)
    {
        cout << "" << i+1 << ". Input customer's name: " ; cin >> cus[i].name ;
        cout << "" << i+1 << ". Input customer's sex: " ; cin >> cus[i].sex ;
        cout << "" << i+1 << ". Input customer's ID: " ; cin >> cus[i].cusID ;
        cout << "" << i+1 << ". Input customer's citizen ID: " ; cin >> cus[i].citiID ;
        cout << "" << i+1 << ". Input customer's house number: " ; cin >> cus[i].houseNo ;
        cout << "" << i+1 << ". Input customer's district: " ; cin >> cus[i].district ;
        cout << "" << i+1 << ". Input customer's city/province: " ; cin >> cus[i].city ;
        cout << endl ;
    }
    cout << "***Select and display***\n" ;
    cout << "\n1. Display a customer info by his/her id." ;
    cout << "\n2. Display all customer info.\n\n" ;
    cout << "\nSelect to display: " ; cin >> n;
    if(n==1)
    {
        display1();
    }
    else if(n==2)
    {
        display2();
    }

}
