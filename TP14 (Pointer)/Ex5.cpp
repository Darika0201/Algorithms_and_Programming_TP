#include <iostream>
using namespace std;
void findMinMax(int number[7], int *min, int *max)
{
    *max = number[0];
    *min = number[0];
    for(int i=0; i<7; i++)
    {
        if(*min > number[i]){
            *min = number[i];
        }
        if(*max < number[i]){
            *max = number[i];
        }
    }
    cout << "\nMinimum number is " << *min << endl ;
    cout << "Maximum number is " << *max << endl ;
}
int main()
{
    int number[7],min,max ;
    cout << "Input 7 integer number: " ;
    for(int i=0; i<7; i++)
    {
        cin >> number[i] ;
    }
    findMinMax(number,&min,&max);
}
