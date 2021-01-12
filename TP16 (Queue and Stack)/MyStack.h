#include <iostream>
using namespace std;
struct Element
{
    int data;
    char chdata;
    Element *next;
};
typedef Element Element;
struct list
{
    int n;
    Element *head, *tail;
};
typedef list list;
list *createlist(list *ls)
{
    ls = new list();
    ls->n=0;
    ls->head = NULL;
    ls->tail = NULL;

}
void enstack(list *ls, int newData)
{
    Element *e;
    e = new Element();
    e ->data = newData;
    e ->next = ls ->head;
    ls ->head = e;
    if(ls->n==0)
    {
        ls ->tail = e;
    }
    ls ->n = ls ->n+1;
}
void destack(list *ls)
{
    Element *tmp;
    if(ls -> n == 0){
        cout << "Data underflow" << endl;
    }else if(ls->n == 1){
        tmp = ls -> head;
        ls -> head = ls -> head -> next;
        delete tmp;
        if(ls -> n == 1)
        {
            ls -> tail = NULL;
        }
        ls -> n = ls -> n -1;
    }else{
        tmp = ls ->head;
        for(int i=1; i<=ls->n-2; i++){
            tmp = tmp -> next;
        }
        ls -> tail = tmp;
        tmp = tmp ->next;
        ls ->tail ->next = NULL;
        delete tmp;
        ls -> n = ls ->n-1;
    }
}
void displayStack(list *ls)
{
    Element *tmp;
    tmp = ls -> head;
    while(tmp!=NULL)
    {
        cout << tmp->data << " ";
        tmp= tmp->next;
    }
    cout << endl;
}
void displayStack_Char(list *ls)
{
    Element *tmp;
    tmp = ls -> head;
    while(tmp!=NULL)
    {
        cout << tmp->chdata << " ";
        tmp= tmp->next;
    }
    cout << endl;
}
