#include <iostream>
using namespace std ;

int factorial(int n)
{
    if(n>1)
    {
        cout << "" << n << " * " ;
        return factorial(n-1)*n;
    }
    else if(n==1)
    {
        cout << "" << n << " = " ;
        return 1;
    }
}
int power(int m , int n)
{
    if(n>1)
    {
        return power(m,n-1)*m ;
    }
    else if(n==1)
    {
        return power(m,n-1)*m ;
    }
    else if(n==0){ return 1 ; }
}
int sumSuite(int n)
{
    if(n>1)
    {
        cout << " " << n << " +";
        return sumSuite(n-1)+n;
    }
    else if(n==1)
    {
        cout << " " << n << " =";
        return sumSuite(n-1)+n;
    }
    else{ return 0; }
}
int sumSquare(int n)
{
    if(n>1)
    {
        cout << "" << n*n << " + " ;
        return sumSquare(n-1)+(n*n);
    }
    else if(n==1)
    {
        cout << "" << n << " = ";
        return sumSquare(n-1)+(n*n);
    }
    else if(n==0) { return 0; }
}
int coutDigit(int n)
{
    int c=0;
    if(n!=0)
    {
        c++;
        return coutDigit(n/10)+c;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int k=0;
    while(k==0)
    {
        int select;
        cout << "\n\n*** Select function ***" ;
        cout << "\n1. Calculate n!. " ;
        cout << "\n2. Calculate power m^n. " ;
        cout << "\n3. Calculate the sum of first n integer. " ;
        cout << "\n4. Calculate sum of square of first n integer. " ;
        cout << "\n5. Count the number of digits of a number. " ;
        cout << "\n\nSelect to calculate: " ; cin >> select ;
        switch(select)
        {
            case 1:
                {
                    int n;
                    cout << "\nInput the number: " ;
                    cin >> n;
                    cout << endl << "" << n << "! = " ;
                    cout << "" << factorial(n) << endl ;
                    break;
                }
            case 2:
                {
                    int m,n;
                    cout << "\nInput an integer m: " ; cin >> m ;
                    cout <<"Input power n: " ; cin >> n ;
                    cout << endl;
                    cout << "" << m << "^" << n << " = " << power(m,n) << endl ;
                    break;
                }
            case 3:
                {
                    int n;
                    cout << "\nInput the number: "; cin >> n;
                    cout << endl ;
                    cout << "The Summation of first n integer of " << n << " =" ;
                    cout <<" "<< sumSuite(n) << endl ;
                    break;
                }
            case 4:
                {
                        int n;
                        cout << "\nInput the number: " ; cin >> n;
                        cout << endl ;
                        cout << "The summation of square of " << n << " = " ;
                        cout << "" << sumSquare(n) << endl ;
                        break;
                }
            case 5:
                {
                    int n;
                    cout << "\nInput the integer: "; cin >> n;
                    cout << endl ;
                    cout << "" << n << " has " << "" << coutDigit(n) << " digit(s)." << endl ;
                    break;
                }
            default :
                {
                    cout << "\nERROR\n" ; break;
                }
        }
    }
}
