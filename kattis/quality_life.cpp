#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int N, i;
    double q, y;
    cin>>N;
    double count = 0;
    for(i=0;i<N;++i)
    {
        cin>>q>>y;
        double a = q*y;
        count += a;
    }
    cout<<fixed<<setprecision(3)<<count<<endl;
    return 0;
}