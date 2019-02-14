#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count;
    string a,b;
    cin>>a>>b;
    if(a=="E")
    {
        for(int i=0;i<b.length();++i)
        {
            count =0;
            for(int j=0;j<b.length();++j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}