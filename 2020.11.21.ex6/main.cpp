#include <iostream>

using namespace std;
int x,y,n,b,r;
int main()
{
   cin >> x>>y>>n;
   b = x * y / n;
   r = x * y % n;
   cout << b;
   cout << r;
}
