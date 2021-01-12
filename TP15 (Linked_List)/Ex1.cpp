#include <iostream>
using namespace std;

struct Element
{
    int data;
    Element *next;
};
typedef Element Element;

struct List
{
    int n;
    Element *head;
    Element *tail;
};
typedef List List;

List* createList()
{
    List *ls;
    ls = new List();
    ls -> head = NULL;
    ls -> tail = NULL;
    ls -> n = 0;
    return ls;
}

void addtoBeginning(List* ls, int newData)
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
void addtoEnd(List* ls, int newData)
{
    Element *e, *tmp;
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
    cout << "\n\n>>> Display all numbers in the list : ";
    while(tmp!=NULL)
    {
        cout << tmp -> data << " " ;
        tmp = tmp -> next;
    }
    cout << endl;
}
int main()
{
    List *L;
    L = createList();
    cout << "Add 7 and 1 to the Beginning of the list:";
    addtoBeginning(L,1);
    addtoBeginning(L,7);
    displayList(L);
    cout << "\nAdd 0 and 4 to the End of the list: ";
    addtoEnd(L,0);
    addtoEnd(L,4);
    displayList(L);
}


