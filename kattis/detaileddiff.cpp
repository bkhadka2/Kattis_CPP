#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int i,j,n,A;
    string str1,str2;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>str1>>str2;
        cout<<str1<<endl;
        cout<<str2<<endl;
        for(j=0;j<str1.length();++j)
        {
            
            if(str1[j]==str2[j])
            {
                cout<<".";
            }
            else
            {
                cout<<"*";
            }            
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}