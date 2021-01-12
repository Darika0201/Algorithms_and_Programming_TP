#include <iostream>
using namespace std;
struct Element
{
    int data;
    Element *next;
};
struct List
{
    int n;
    Element *head,*tail;
};
List *createList(List *ls)
{
    ls = new List();
    ls -> n=0;
    ls -> head = NULL;
    ls -> tail = NULL;
    return ls;
}
void list_of_numbers_atBeginning(List *ls, int newData)
{
    Element *e;
    e = new Element();
    e -> data = newData;
    e -> next = ls -> head;
    ls -> head = e;
    if(ls -> n == 0)
    {
        ls -> tail = e;
    }
    ls -> n = ls -> n+1;
}
void list_of_numbers_atEnd(List *ls, int newData)
{
    Element *e,*tmp;
    e = new Element();
    e -> data = newData;
    e -> next = NULL;
    tmp = ls -> head;
    while(tmp -> next != NULL)
    {
        tmp = tmp -> next;
    }
    tmp -> next = e;
    if(ls -> n == 0)
    {
        ls -> head = e;
    }
    ls -> n = ls -> n+1;
}
void displayList(List *ls)
{
    Element *tmp;
    tmp = ls -> head;
    cout << "\n>>> Display all data in the list :  " ;
    while(tmp != NULL)
    {
        cout << tmp -> data << " " ;
        tmp = tmp -> next;
    }
    cout << endl;
}
bool CheckNumInList(List *ls,int num)
{
    Element *tmp;
    bool check = false ;
    tmp = ls -> head;
    while(tmp != NULL)
    {
        if(tmp -> data == num)
        {
           check = true ;
           break;
        }
        tmp = tmp -> next;
    }
    return check;
}
int main()
{
    List *L;
    L =createList(L);
    int num;
    cout << "Input the number at the Beginning: "; cin >> num;
    list_of_numbers_atBeginning(L,-1);
    list_of_numbers_atBeginning(L,0);
    list_of_numbers_atBeginning(L,5);
    list_of_numbers_atBeginning(L,3);
    list_of_numbers_atBeginning(L,2);
    list_of_numbers_atBeginning(L,1);
    list_of_numbers_atBeginning(L,num);
    displayList(L);
    cout << "\nInput the number at the End: " ; cin >> num;
    list_of_numbers_atEnd(L,num);
    displayList(L);
    cout << "\nInput the number to check in the list: "; cin >> num;
    if(CheckNumInList(L,num) == true)
    {
        cout << "\n>>>The number is exist in the list.\n";
    }
    else
    {
        cout << "\n>>>The number is not exist in the list.\n";
    }
}
