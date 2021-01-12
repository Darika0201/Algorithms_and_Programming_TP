#include <iostream>
using namespace std;

struct element{
    int data;
    element *next;
    element *previous;
};
typedef struct element element;
struct list{
    int n;
    element *head,*tail;
};
typedef struct list list;
list *creatlist(list *ls){
    ls = new list();
    ls -> n = 0;
    ls -> head = NULL;
    ls -> tail = NULL;
    return ls;
}
void insert_begin(list *ls, int newData){
    element *e;
    e = new element();
    e -> data = newData;
    e -> previous = NULL;
    e -> next = ls->head;
    if(ls->n == 0){
        ls -> tail = e;
    }
    if(ls->n != 0){
        ls -> head-> previous = e;
    }
    ls -> head = e;
    ls -> n = ls -> n+1;
}
void insert_end(list *ls, int newData)
{
    element *e;
    if(ls ->n == 0){
        insert_begin(ls,newData);
    }else{
        e = new element();
        e -> data = newData;
        e -> previous = NULL;
        e -> next = NULL;
        ls -> tail -> next = e;
        ls -> tail = e;
        ls -> n = ls -> n+1;
    }
}
void displayList(list *ls){
    element *tmp;
    tmp = ls ->head;
    while(tmp!=NULL){
        cout << tmp ->data << " " ;
        tmp = tmp ->next;
    }cout << endl;
}
void displayList2(list *ls){
    element *tmp;
    tmp = ls ->tail;
    while(tmp!=NULL){
        cout << tmp ->data << " ";
        tmp = tmp ->previous;
    }cout << endl;
}
void delete_begin(list *ls){
    element *tmp;
    tmp = ls ->head;
    ls ->head = ls -> head -> next;
    delete tmp;
    if(ls ->n == 1){
        ls ->tail = NULL;
    }
    ls ->n = ls ->n-1;
}
void delete_last(list *ls){
    element *tmp;
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
int main()
{
    list *L;
    L = creatlist(L);
    insert_begin(L,9);
    insert_begin(L,5);
    insert_begin(L,3);
    insert_begin(L,2);
    insert_begin(L,1);
//    insert_end(L,9);
    delete_begin(L);
    delete_last(L);
    displayList(L);
//    displayList2(L);

}


