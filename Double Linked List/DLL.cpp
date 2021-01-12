#include <iostream>
using namespace std;

//1.Create DLL
//2.Add data to begin of DLL
//3.Display data in DLL (start from head)
//4.from tail
//5.Add data to end of DLL
//6.Run a main function

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
int main()
{
    list *L;
    L = creatlist(L);
    insert_begin(L,3);
    insert_begin(L,2);
    insert_begin(L,1);
  //  insert_end(L,9);
    displayList(L);
    displayList2(L);
}


