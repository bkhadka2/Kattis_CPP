#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[3],b[3],i;
    for(i=0;i<3;++i)
    {
        cin>>a[i]>>b[i];    
    }
    
    if(a[0]==a[1] && b[0]==b[2])
    {
        cout<<a[2]<<" "<<b[1]<<endl;
    }
    if(a[0]==a[1] && b[1]==b[2])
    {
        cout<<a[2]<<" "<<b[0]<<endl;
    }
    if(a[1]==a[2] && b[0]==b[2])
    {
        cout<<a[0]<<" "<<b[1]<<endl;
    }
    if(a[1]==a[2] && b[0]==b[1])
    {
        cout<<a[0]<<" "<<b[2]<<endl;
    }
    
    if(a[0]==a[2] && b[1]==b[2])
    {
        cout<<a[1]<<" "<<b[0]<<endl;
    }
    if(a[0]==a[2] && b[0]==b[1])
    {
        cout<<a[1]<<" "<<b[2]<<endl;
    }
    
    return 0;
}