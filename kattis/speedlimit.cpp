#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,i;
    
    while(cin>>n)
    {
        int b=0;
        int d=0;
        
        int s[n],t[n],a,c;
        if(n==-1)
        {
            break;
        }
        else
        {
            
            
            for(i=0;i<n;++i)
            { 
                cin>>s[i]>>t[i];                           
            }
            for(i=0;i<n;++i)
            {
                a=s[0]*t[0];
            }
            for(i=1;i<n;++i)
            {
                c=s[i]*(t[i]-t[i-1]);
                d+=c;
            }

        }
        cout<<a+d<<" "<<"miles"<<endl;        
    }       
    return 0;
}