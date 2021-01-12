#include <iostream>
using namespace std;
struct Element
{
    char data;
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
List *createList()
{
    List *ls;
    ls = new List();
    ls -> n = 0;
    ls -> head = NULL;
    ls -> tail = NULL;
    return ls;
}
void list_of_charater(List *ls, char alphabet)
{
    Element *e;
    e = new Element();
    e -> data = alphabet;
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
void displayList(List *ls)
{
    Element *tmp;
    tmp = ls -> head;
    while(tmp != NULL)
    {
        cout << tmp -> data << " " ;
        tmp = tmp -> next;
    }
    cout << endl ;
}
int main()
{
    List *L;
    L = createList();
    for(int i=65; i<=90; i++)
    {
        list_of_charater(L,char (i));
    }
    displayList(L);
}
