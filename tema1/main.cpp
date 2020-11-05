#include <iostream>

using namespace std;

int main()
{
    cout << "globuri albe:";
    int globuriAlbe;
    cin >> globuriAlbe;
    int globuriRosii;
    globuriRosii=globuriAlbe+3;
    int globuriAlbastre=globuriAlbe+globuriRosii-2;
    int totalGloburi=globuriAlbastre+globuriAlbe+globuriRosii;
    cout <<"globuri in brad:"<< totalGloburi << endl;
}
