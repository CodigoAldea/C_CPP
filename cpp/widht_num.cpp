// setprecision and swetw function 

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.14159265;
    cout<< pi<< endl;
    cout<<setprecision(4);
    cout<< pi<< endl;
    cout<< "|"<<setw(8)<< pi<<"|"<<endl;
    return 0;
}
