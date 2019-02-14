#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int list[n]={};
    
    for(i=0;i<n;++i)
    {
        cin>>list[i];
    }
    sort(list,list+n, greater<int>());
    int count = 0;
    int temp = 0;
    //int temp = 0;
    for(i=0;i<n;++i)
    {
        if(i%2==0)
        {
            count+=list[i];
        }
        else
        {
            temp+=list[i];
        }
    }
    
    cout<<count<<" "<<temp<<endl;
}