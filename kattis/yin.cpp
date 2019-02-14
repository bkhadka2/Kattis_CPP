#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    int count=0;
    int temp=0;
    int a,b;
    string x,y,c,d;
    string s;
    cin>>s;
    int A=s.length();
    for(i=0;i<A;++i)
    {
        a=s.find(s[0]);
        x=s.substr(a,1);
        if(x=="W")
        {
            count++;            
        }
        if(x=="B")
        {
            temp++;
        }
        c=s.erase(a,1);        
    }    
    if(count==temp)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;

}