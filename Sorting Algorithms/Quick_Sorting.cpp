#include <iostream>
using namespace std;

void swapping(int *num1, int *num2){
    int tmp;

    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int Partition (int arr[], int low, int high){
    int pivot,leftwall;
    pivot = arr[high];
    leftwall = low;

    for (int i=low;i<=high-1;i++){
        if (arr[i]<pivot){
            swapping (&arr[i],&arr[leftwall]);
            leftwall++;
        }
    }

    swapping(&arr[high],&arr[leftwall]);

    return (leftwall);
}


void quicksort (int arr[], int low, int high){
    int pivot_location;
    if(low<high){
        pivot_location = Partition(arr,low,high);
        quicksort(arr,low,pivot_location-1);
        quicksort(arr,pivot_location+1,high);
    }
}

int main(){
    const int SIZE=9;
    int arr[SIZE] = {8,3,1,9,2,4,7,5,6};

    cout<<"Before sorting the data in array is: ";
    for (int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quicksort(arr,0,SIZE-1);

    cout<<"After sorting the data in array is: ";
    for (int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
