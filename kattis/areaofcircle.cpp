#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    double r;
    int m,c;
    while(cin>>r>>m>>c)
    {
        if(r==0 && m==0 && c==0)
        {
            break;
        }
        else
        {
            double a=(c*pow((2*r),2))/m;
            cout<<3.1415926535*r*r<<" "<<a<<endl;
        }
    }
    return 0;
}