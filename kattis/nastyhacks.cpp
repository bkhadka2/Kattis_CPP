#include <iostream>
#include <string>

using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    int i;
    int r[n]={0};
    int e[n]={0};
    int c[n]={0};    
    for(i=0;i<n;++i)
    {
        cin>>r[i]>>e[i]>>c[i];
    }
    for(i=0;i<n;++i)
    {
        if(r[i]<(e[i]-c[i]))
            cout<<"advertise"<<endl;;
        if(r[i]==(e[i]-c[i]))
            cout<<"does not matter"<<endl;
        if(r[i]>(e[i]-c[i]))
            cout<<"do not advertise"<<endl;
    }    
    return 0;
}