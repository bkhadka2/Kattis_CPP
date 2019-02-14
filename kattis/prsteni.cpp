#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <numeric>
#include <stdio.h>
using namespace std;
int gcd(int first, int second)
{
    if (second == 0)
        return first;
    else
        return gcd(second, first % second);
}
int main()
{
    int i;
    int N;
    cin>>N;
    int p[N];
    int a[N];
    for(i=0;i<N;++i)
    {
        cin>>p[i];        
    }
    for(i=0;i<N-1;++i)
    {
        a[i]=gcd(p[0],p[i+1]);
        cout<<p[0]/a[i]<<"/"<<p[i+1]/a[i]<<endl;        
    }    
    return 0;
}