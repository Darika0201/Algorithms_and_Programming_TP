#include <iostream>
using namespace std;

void displayStar(int n)
{
    if(n>0)
    {
        cout << "* " ; n--;
        displayStar(n);
    }
    return ;
}
void displayNumbers(int n)
{
    if(n>0)
    {
        cout << " " << n--;
        displayNumbers(n);
    }
    return;
}
int sumArr(int arr[], int size)
{
    if(size!=0)
    {
        return sumArr(arr,size-1)+arr[size-1];
    }
    return 0 ;
}
int countCharAppear(string s, char c)
{
    int len=s.length();
    if(s[0]==c)
    {
        return 1+ countCharAppear(s.substr(1,len),c);
    }
    else if(len==0)
    {
        return 0 ;
    }
    return countCharAppear(s.substr(1,len),c);
}
int sumDigit(int n)
{
    if(n!=0)
    {
        return sumDigit(n/10) + n%10;
    }
    return 0;
}
int main()
{
    int select;
    int k=0;
    while(k==0)
    {
        cout << "\n\n*** Select function ***" ;
        cout << "\n1. Display n star(*)." ;
        cout << "\n2. Display numbers from n to 1.";
        cout << "\n3. Calculate the sum of all elements in array." ;
        cout << "\n4. Check how many times a character c appears in a string s." ;
        cout << "\n5. Find the sum of digits in a number." ;
        cout << "\nSelect to calculate: " ; cin >> select ;

        switch(select)
        {
            case 1:
                {
                    int n;
                    cout << "\nInput amount star: " ; cin >> n ;
                    cout << endl ; displayStar(n) ; cout << endl;
                    break;
                }
            case 2:
                {
                    int n ;
                    cout << "\nInput the number: " ; cin >> n ;
                    cout << "\n" ; displayNumbers(n) ; cout << endl ; break;
                }
            case 3:
                {
                    int size,arr[100];
                    cout << "\nInput size of array: " ; cin >> size ;
                    cout << "Input the elements of array: ";
                    for(int i=0; i<size ; i++)
                        {
                            cin >> arr[i] ;
                        }
                    cout << "\nThe summation of all elements in array is " << sumArr(arr,size) << endl ;
                    break;
                }
            case 4:
                {
                    string s ;
                    char c ;
                    cout << "\nInput the string: " ; cin >> s ;
                    cout << "Input a character: " ; cin >> c ;
                    cout << "\nThe character < " << c ;
                    cout << " > is appear in string < " << s << " > " << countCharAppear(s,c) << " time(s). \n" ;
                    break;
                }
            case 5:
                {
                    int n;
                    cout << "\nInput the number: " ; cin >> n ;
                    cout << "\nThe sum of digits in a number is " << sumDigit(n) << endl ;
                    break;
                }
            default : cout << "\nERROR\n" ; break;
        }
    }
}
