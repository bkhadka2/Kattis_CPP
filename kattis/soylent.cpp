#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int T,i;
    double a;
    cin>>T;
    double N[T]={};
    for(i=0;i<T;++i)
    {
        cin>>a;
        N[i]=a/400.00;
        
    }
    for(i=0;i<T;++i)
    {
        cout<<ceil(N[i])<<endl;
        
    }
    

    return 0;
}