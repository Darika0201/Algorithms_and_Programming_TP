#include <iostream>
using namespace std;

const int SIZE = 10;
struct Queue{
    int REAR, FRONT;
    int Q[SIZE];
};
struct Queue q1;
void createEmptyQueue(){
    q1.FRONT = -1;
    q1.REAR = -1;
}
void enqueue(int data){
    if(q1.REAR == SIZE-1){
        cout << "Can not add data. Data overflow\n" ;
    }else if(q1.FRONT == -1){
        q1.Q[0] = data;
        q1.FRONT = 0;
        q1.REAR = 0;
    }else{
        q1.REAR = q1.REAR +1;
        int index = q1.REAR;
        q1.Q[index] = data;
    }
}
void dequeue(){
    if(q1.REAR >= 0 && q1.FRONT <= q1.REAR){
        q1.Q[q1.FRONT] = 0;
        q1.FRONT = q1.FRONT + 1;
    }else{
        cout << "Can not dequeue. Data underflow" << endl;
    }
}
void displayQ(struct Queue q){
    for(int i=q.FRONT; i<=q.REAR; i++){
        cout << q.Q[i] << " ";
    }
    cout << endl;
}

int main(){
    createEmptyQueue();
    enqueue (3);
    enqueue (5);
    enqueue (7);

    displayQ(q1);
    enqueue(0);
    displayQ(q1);
    dequeue();
    displayQ(q1);
    dequeue();
    displayQ(q1);
    dequeue();
    displayQ(q1);
    dequeue();
    displayQ(q1);
    dequeue();
}
