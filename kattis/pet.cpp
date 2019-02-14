#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b,c,d,i;
    int f[5];
    for(i=0;i<5;++i)
    {
        cin>>a>>b>>c>>d;
        f[i]=a+b+c+d;
    }
    if((f[0]>f[1]) && (f[0]>f[2]) && (f[0]>f[3]) && (f[0]>f[4]))
    {
        cout<<"1"<<" "<<f[0]<<endl;
    }
    if((f[1]>f[0]) && (f[1]>f[2]) && (f[1]>f[3]) && (f[1]>f[4]))
    {
        cout<<"2"<<" "<<f[1]<<endl;
    }
    if((f[2]>f[0]) && (f[2]>f[1]) && (f[2]>f[3]) && (f[2]>f[4]))
    {
        cout<<"3"<<" "<<f[2]<<endl;
    }
    if((f[3]>f[0]) && (f[3]>f[1]) && (f[3]>f[2]) && (f[3]>f[4]))
    {
        cout<<"4"<<" "<<f[3]<<endl;
    }
    if((f[4]>f[0]) && (f[4]>f[1]) && (f[4]>f[2]) && (f[4]>f[3]))
    {
        cout<<"5"<<" "<<f[4]<<endl;
    }
    return 0;
}