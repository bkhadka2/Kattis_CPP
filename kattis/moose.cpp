#include <iostream>
#include <string>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    int count=0;
    int i;
    
    if (l<r)
    {
        for(i=0;i<r;++i)
        {
            count++;
        }
        cout<<"Odd"<<" "<<count+r<<endl;
    }
    if(r<l)
    {
        for(i=0;i<l;++i)
        {
            count++;
        }

        cout<<"Odd"<<" "<<count+l<<endl;
    }
    if(l==0 && r==0)
    {
        cout<<"Not a moose"<<endl;
    }
    if(l==r && l>0 && r>0)
    {
        cout<<"Even"<<" "<<l+r<<endl;
    }

    return 0;
}