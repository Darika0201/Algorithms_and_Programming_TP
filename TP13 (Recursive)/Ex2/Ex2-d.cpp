#include <iostream>
using namespace std;

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

int main()
{
    string s ;
    char c ;
    cout << "Input the string: " ; cin >> s ;
    cout << "Input a character: " ; cin >> c ;
    cout << "\nThe character < " << c ;
    cout << " > is appear in string " << countCharAppear(s,c) << " time(s). \n" ;
}
