#include <iostream>
using namespace std;
void Merge(int array[], int l, int m, int r)
{
    // l, r, and m is the left, right, and middle index
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(i=0; i<n1; i++){
        L[i] = array[l+i];
    }
    for(j = 0; j < n2; j++){
        R[j] = array[m + 1 + j];
    }
    i=0; j=0; k =l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            array[k] = L[i];
            i++;
        }else{
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        array[k] = L[i];
        i++; k++;
    }
    while(j < n2){
        array[k] = R[j];
        j++; k++;
    }
}
void MergeSort(int array[], int l, int r){
    if(l < r){
        int m = l + (r-l) / 2;
        MergeSort(array, l, m);
        MergeSort(array, m+1, r);
        Merge(array, l, m, r);
    }
}
void displayArray(int array[], int size)
{
    for(int i = 0; i < size; i++){
        cout << " " << array[i];
    }
    cout << endl;
}
int main()
{
    int array[] = {9,12,25,3,5,20};
    int arrSize = sizeof(array)/sizeof(array[0]);
    cout << ">>> Given array : \n\n" ;
    displayArray(array, arrSize);
    MergeSort(array, 0, arrSize -1);
    cout << "\n>>> Merge Sorted array is : \n\n";
    displayArray(array, arrSize);

}
