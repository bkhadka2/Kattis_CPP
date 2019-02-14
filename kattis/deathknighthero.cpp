#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,i,a,fin,j;
    string k,b;
    int count=0;
    int temp=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>k;
        for(j=0;j<k.length();++j)
        {
            if(k[j]=='C' && k[j+1]=='D')
            {
                count++;
            }
            
            
            
        }
    }
    cout<<n-count<<endl;
    return 0;
}