#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(i=1;i<=15;i++)
    {
        if(a==i)
        {
            cout<<pow((i+i+1),2)<<endl;
        }
    }
    return 0;
}