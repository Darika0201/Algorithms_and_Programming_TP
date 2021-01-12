#include<iostream>
#include<cstdlib>
using namespace std;
void display(int*arr, int Size){
    for(int i=0 ;i<Size; i++){
        cout<<arr[i]<<',';
    }
    cout<<endl;
}
void selectionSort(int*arr, int Size){
     for(int i=0 ;i<10; i++){
        int small=arr[i];
        int smallIndex=i;

        for (int j=i; j<10;j++)
        {
            if(arr[j]<small){
                small=arr[j];
                smallIndex=j;
            }
        }
        swap(arr[i],arr[smallIndex]);
    }
}
int main(){
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
