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
    int n; //number of element in list
    Element *head;
    Element *tail;
};
typedef List List;

//A function to create an empty list
List* createList()
{
    List *ls;
    ls = new List(); //allocate memory address

    //ls.n = 0; // error because ls is pointer
    ls->n = 0;
    ls->head = NULL;
    ls->tail = NULL;

    return ls;
}
void insert_begin(List *ls, int newData)
{
    //Create new element
    Element *e;
    e=new Element();
    e->data= newData;

    //Update pinter, head, tail
    e->next = ls->head;
    ls->head = e;
    if(ls->n==0)
    {
        ls->tail = e;
    }
    ls->n = ls->n +1;

}

void displayList(List *ls)
{
    Element *tmp;
    tmp = ls->head;
    while(tmp!=NULL)
    {
        cout << tmp->data << " ";
        tmp= tmp->next;
    }
    cout << endl;
}
int main()
{
    List *L;
    L = createList();

    insert_begin(L,3);
    insert_begin(L,2);
    insert_begin(L,5);
    displayList(L);
    displayList(L);
    displayList(L);
    cout << L->n << endl;

}
