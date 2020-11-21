#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d;
    cout << "x:";
    cin >> x;
    d = x % 10;
    c = x/10%10;
    b = x/100%10;
    a = x/1000;
    cout << d <<endl ;
    cout << c <<endl ;
    cout << b <<endl ;
    cout << a <<endl ;
}
