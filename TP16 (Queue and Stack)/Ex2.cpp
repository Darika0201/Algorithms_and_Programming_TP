#include <iostream>
#include <string.h>
using namespace std;
const int SIZE = 52;
struct Stack{
    int front;
    int S[SIZE];
};
struct Stack s1;
void createMyStack(){
    s1.front = -1;
}
void push(int data){
    if(s1.front < SIZE){
        s1.front = s1.front +1;
        s1.S[s1.front] = data;
    }
    else{
        cout << "Can not add data. Data overflow\n" ;
    }
}
void pop(){
    if(s1.front < 0)
        cout << "Data underflow" << endl;
    else
        s1.S[s1.front] = -99;
        s1.front = s1.front -1;
}
void displayStack(){
    for(int i = s1.front; i >= 0; i--){
        cout << s1.S[i] << " ";
    }
    cout << endl;
}
int main(){
    char str[52] = {"* * * * * N * O I * * * T S * * * E N Q * Y * S A E"};
    int n = strlen("E A S * Y * Q U E * * * S T * * * I O * N * * * * *");
    for(int i = 0; i < n; i++)
    {
        if(str[i]!= '*'){
            push(str[i]);
        }
        else if(str[i] == '*'){
            pop();
        }
    }
    displayStack();
}
