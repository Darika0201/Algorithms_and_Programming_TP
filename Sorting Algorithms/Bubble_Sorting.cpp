#include <iostream>
using namespace std;
void BubbleSorted(int array[],int size){
    for (int s=0; s<size-1; ++s){
        for (int i=0; i<size-s-1; ++i){
            if (array[i]>array[i+1]){
                //Swap the element
                int temp = array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
    cout << "Sorted Array in Ascending Order:";
    for (int b=0; b<size; ++b){
        cout<<"   "<<array[b];}
}
int main(){
    int Unsorted[]={8,4,2,3,9,1,5,7,6,0};
    int size  = sizeof(Unsorted) / sizeof(Unsorted[0]);
    cout<<"Array before sorted : ";
    for (int i=0;i<10;i++)
    {
        cout<<Unsorted[i]<<"   ";
    }
    cout<<"\n\n";
    BubbleSorted(Unsorted,size);}