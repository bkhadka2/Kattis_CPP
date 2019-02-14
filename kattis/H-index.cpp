#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#include <ctime>
using namespace std;


int main()
{
    int n,c,i,j;
    cin>>n;
    int count =0;
    int num[n]={};
    for(i=0;i<n;++i)
    {
        cin>>c;
        num[i]=c;
    }
    sort(num,num+n,greater<int>());
   
    for(j=1;j<=n;++j)
    {
        if(num[j-1]>=j)
        {
            count++;
        }
    }
    double CLOCK_PER_SEC;
    cout<<(clock()/ CLOCK_PER_SEC)*1000<<endl;
    cout<<count<<endl;
    return 0;
}