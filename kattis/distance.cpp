#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x1,y1,x2,y2,p;
    double a;
    while(cin>>x1)
    {
        if(x1==0)
        {
            break;
        }    
        cin>>y1>>x2>>y2>>p;     
        a=pow((pow(abs(x1-x2),p)+pow(abs(y1-y2),p)),(1/p));       
        cout<<fixed<<setprecision(6)<<a<<endl;         
    }    
    return 0;
}