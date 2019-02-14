#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    double C;
    int  L,i;
    double w,l,ans;
    cin>>C;
    cin>>L;
    ans=0;
    double calc;
    
    for(i=0;i<L;++i)
    {
        cin>>w>>l;
        calc=w*l*C;
        ans+=calc;
    }
    cout<<fixed<<setprecision(8)<<endl;
    cout<<ans<<endl;
    return 0;
}