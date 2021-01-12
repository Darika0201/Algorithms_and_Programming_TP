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
void addNumber(List *ls, int newData)
{
    Element *e;
    e = new Element();
    e -> data = newData;
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
    cout << "\n\n>>> Display all input numbers:  ";
    while(tmp != NULL)
    {
        cout << tmp -> data << " ";
        tmp = tmp -> next;
    }
    cout << endl;
}
int main()
{
    int num,n;
    List *L;
    L = createList(L);
    cout << "Input amount of input number: ", cin >> n;
    for(int i=1; i<=n; i++)
    {
        cout << "\n>>> Input " << i << " integer: " ; cin >> num;
        addNumber(L,num);
    }
    displayList(L);
}
