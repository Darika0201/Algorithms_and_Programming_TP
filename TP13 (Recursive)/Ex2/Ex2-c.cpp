#include <iostream>
using namespace std;

int sumArr(int arr[], int size)
{
    if(size!=0)
    {
        return sumArr(arr,size-1)+arr[size-1];
    }
    return 0 ;
}

int main()
{
    int size,arr[100];
    cout << "Input size of array: " ; cin >> size ;
    cout << "Input the elements of array: ";
    for(int i=0; i<size ; i++)
    {
        cin >> arr[i] ;
    }
    cout << "\nThe summation of all elements in array is " << sumArr(arr,size) << endl ;
}
