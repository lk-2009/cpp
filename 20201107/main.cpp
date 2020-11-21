#include <iostream>

using namespace std;

int ex1();
int ex2();
int ex3();


int main(){

 //ex1();
 ex2();
 //ex3();
}


int ex1(){
   int x,y;
    cout << "x: ";
    cin >> x;
    y= x * 100;
    cout << y << endl;
}

int ex2(){
        int a,l,z,o;
        cout << "a = ";
        cin >> a;
        l= a * 12;
        z= a * 365;
        o= z * 24;
        cout << "luni = " << l <<endl;
        cout << "zile = " << z <<endl;
        cout << "ore = "  << o <<endl;
}


int ex3(){
int x;
cout << "X: " ;
cin >> x;
cout << "The multiple of it is: " << x *x << endl;
}
