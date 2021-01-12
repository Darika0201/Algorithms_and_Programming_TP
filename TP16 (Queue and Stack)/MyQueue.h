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
    Element *front, *rear;
};
typedef list list;
list *createlist(list *ls)
{
    ls = new list();
    ls->n=0;
    ls->front = NULL;
    ls->rear = NULL;

}
void enqueue(list *ls, int newData)
{
    Element *e;
    e = new Element();
    e ->data = newData;
    e ->next = ls ->front;
    ls ->front = e;
    if(ls->n==0)
    {
        ls ->rear = e;
    }
    ls ->n = ls ->n+1;
}
void dequeue(list *ls)
{
    Element *tmp;
    if(ls -> n == 0){
        cout << "Data underflow" << endl;
    }else if(ls->n == 1){
        tmp = ls -> front;
        ls -> front = ls -> front -> next;
        delete tmp;
        if(ls -> n == 1)
        {
            ls -> rear = NULL;
        }
        ls -> n = ls -> n -1;
    }else{
        tmp = ls ->front;
        for(int i=1; i<=ls->n-2; i++){
            tmp = tmp -> next;
        }
        ls -> rear = tmp;
        tmp = tmp ->next;
        ls ->rear ->next = NULL;
        delete tmp;
        ls -> n = ls ->n-1;
    }
}
void displayQueue(list *ls)
{
    Element *tmp;
    tmp = ls -> front;
    while(tmp!=NULL)
    {
        cout << tmp->data << " ";
        tmp= tmp->next;
    }
    cout << endl;
}
