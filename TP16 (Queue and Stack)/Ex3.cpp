#include <iostream>
#include <string.h>
#include "myqueue.h"
int main()
{
    list *ls;
    ls = createlist(ls);
    char str[100] = {"* * * * * N * O I * * * T S * * * E N Q * Y * S A E"};
    int n = strlen("E A S * Y * Q U E * * * S T * * * I O * N * * * * *");
    for(int i = 0; i < n; i++)
    {
        if(str[i]!= 42)
        {
            enqueue(ls, str[i]);
        }
        else if(str[i] == 42){
            dequeue(ls);
        }
    }
    displayQueue(ls);
}
