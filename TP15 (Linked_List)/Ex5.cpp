#include <iostream>
using namespace std;
struct student
{
    string name , id;
    float average;
};
struct Element
{
    student data;
    Element *next;
};
struct List
{
    int n;
    Element *head, *tail;
};
List *createList(List *ls)
{
    ls = new List();
    ls -> n = 0;
    ls -> head = NULL;
    ls -> tail = NULL;
    return ls;
}
void list_of_structure(List *ls, student stu)
{
    Element *e;
    e = new Element();
    e -> data = stu;
    e -> next = NULL;
    if(ls -> n == 0)
    {
        ls -> head = e;
        ls -> tail = e;
    }
    ls -> tail -> next = e;
    ls -> tail = e;
    ls -> n = ls -> n+1;
}
bool checkID(List *ls, student stu)
{
    Element *tmp;
    tmp = ls -> head;
    while(tmp != NULL)
    {
        if(tmp -> data.id == stu.id)
        {
            cout << "\nThis ID already exist! \n   Input another ID: "; cin >> stu.id;
        }
        tmp = tmp -> next;
    }
}
void addInformation(List *ls, student stu)
{
    Element *e, *tmp;
    int amount;
    cout << "Input amount of student(s): "; cin >> amount;
    for(int i=1; i<=amount; i++)
    {
        cout << endl;
        cout << "[" << i << "] Input student's ID: "; cin >> stu.id;
       // checkID(ls,stu);
        cout << "[" << i << "] Input student's name: "; cin >> stu.name;
        cout << "[" << i << "] Input student's average: "; cin >> stu.average;
        list_of_structure(ls,stu);
    }
}
void displayList(List *ls)
{
    Element *tmp;
    tmp = ls -> head;
    cout << "\n*** Display all Information of students. ***\n";
    cout << "\nID \tName \t\tAverage\n";
    while(tmp != NULL)
    {
        cout << tmp -> data.id << " \t" << tmp -> data.name << " \t\t" << tmp -> data.average << endl;
        tmp = tmp -> next;
    }
    cout << endl;
}
int main()
{
    List *L;
    student stu;
    L = createList(L);
    addInformation(L,stu);
    displayList(L);
}
