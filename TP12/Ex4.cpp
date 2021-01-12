#include <iostream>
using namespace std;
int main()
{
    int sec,h,mn,s;
    cout << "Input the second: " ; cin >> sec ;
    h= sec / 3600 ;
    mn= (sec-h*3600)/60;
    s= (sec-h*3600)-(mn*60);
    cout << "It is " << h << " h " << mn << " mn " << s << " s." << endl ;

}
