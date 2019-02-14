#include <string>
#include <iostream>
using namespace std;
int main()
{
    int P,T,i,j,x;
    cin>>P>>T;
    int A=T*P;
    string s[A];
    int count;
    int h1=0;
    int temp;
    int count1;

    for(i=0;i<A;++i)
    {
        cin>>s[i];
    }

    for(i=0;i<P;++i)
    {
        count=0;
        x=s[i].length();
        temp=x-1;
        for(j=0;j<temp;++j)
        {
            if((int(s[i][0])>64 && int(s[i][0])<91) && (int(s[i][j+1])>96 && int(s[i][j+1])<123))
            {
                count++;                               
            }            
        }
        if(count>0)
        {
            count1=s[i].length()-count;
            h1+=count1;
        }        
    }

    cout<<h1<<endl;
    return 0;

}