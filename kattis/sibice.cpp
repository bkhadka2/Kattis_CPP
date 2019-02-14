#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int volume;
int main()
{
    int N;
    int W,H,h;
    string a;
    cin>>N>>W>>H;
    h=sqrt(W*W+H*H);
    int P[N]={0};
    for(int i=0;i<N;++i)
    {
        cin>>P[i];       
    }
    for(int i=0;i<N;++i)
    {
        if(P[i]<=h)
        {
            a="DA";
        }
        else
        {
            a="NE";
        }
         cout<<a<<endl;
    }    
    return 0;
}