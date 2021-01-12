#include <iostream>
#include <math.h>
using namespace std;
void solveQuadratic(int a, int b, int c, float *x1, float *x2)
{
    int Delta;
    Delta = pow(b,2)-(4*a*c);
    if(Delta>0){
        *x1 = ( (-b + sqrt(Delta)) / (2*a) );
        *x2 = ( (-b - sqrt(Delta)) / (2*a) );
        cout << "\nx1 = " << *x1 << endl;
        cout << "x2 = " << *x2 << endl;
    }
    else if(Delta==0){
        *x1= -b/(2*a) ;
        cout << "\nx1 = x2 = " << *x1 << endl ;
    }
    else if(Delta<0){
        cout << "\nNo root! \n" ;
    }
}
int main()
{
    int a, b, c; float x1,x2;
    cout << "Input parameter a: " ; cin >> a ;
    cout << "Input parameter b: " ; cin >> b ;
    cout << "Input parameter c: " ; cin >> c ;
    solveQuadratic(a,b,c,&x1,&x2);
}
