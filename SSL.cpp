#include <iostream>
using namespace std;
struct Element
{
    int data;
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
void displaylist(list *ls)
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
void insert_begin(list *ls, int newData)
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
void insert_end(list *ls, int newData)
{
    Element *e;
    if(ls->n==0)
    {
        insert_begin(ls,newData);
    }else
    {
        e = new Element();
        e -> data = newData;
        e -> next = NULL;
        ls -> tail -> next =e;
        ls ->tail = e;
        ls -> n = ls ->n+1;
    }
}
void delete_begin(list *ls)
{
    Element *tmp;
    tmp = ls ->head;
    ls ->head = ls -> head -> next;
    delete tmp;
    if(ls ->n == 1){
        ls ->tail = NULL;
    }
    ls ->n = ls ->n-1;
}
void delete_last(list *ls)
{
    Element *tmp;
    if(ls->n==1){
        delete_begin(ls);
    }else{
        tmp = ls ->head;
        for(int i=1; i<=ls->n-2; i++)
        {
            tmp = tmp -> next;
        }
        ls -> tail = tmp;
        tmp = tmp ->next;
        ls ->tail ->next = NULL;
        delete tmp;
        ls -> n = ls ->n-1;
    }
}
void destroy_list(list *ls)
{
    while(ls->n>0){
        delete_begin(ls);
    }
}
int main()
{
    list *L;
    L = createlist(L);
    insert_begin(L,2);
    insert_end(L,5);
//    delete_begin(L);
//    delete_last(L);
//    destroy_list(L);
    displaylist(L);
}
