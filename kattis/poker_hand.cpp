#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count[5]={};
    //cin>>ws;
    string a[5]={};
    int i,j;
    for(i=0;i<5;++i)
    {        
        cin>>a[i];
       
    }
    for(j=0;j<5;++j)
    {
        int temp=1;
        
        for(i=j;i<4;++i)
        {
            if(a[j][0]==a[i+1][0])
            {
                temp++;
                
            }
            
        }
        count[j]=temp;
    }
    sort(count,count+5,greater<int>());
    cout<<count[0]<<endl;
    return 0;
}