#include <iostream>
#include <string>
using namespace std;
int main()
{
    int X, N,P,a;
    cin>>X;
    cin>>N;
    int count=0;    
    for(int i=0;i<N;++i)
    {
        
        cin>>P;        
        count+=P;        
        a=((X*N)-(count))+X;                
    }    
    cout<<a<<endl;
    return 0;
}