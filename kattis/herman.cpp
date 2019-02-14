#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int R;
    double A,a;
    cin>>R;
    A=R*3.14159265359*R;
    a=R*2*R;
    cout<<fixed<<setprecision(6)<<A<<endl;
    cout<<fixed<<setprecision(6)<<a<<endl;
    return 0;
}