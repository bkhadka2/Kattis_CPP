#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int calculateMile(double mile)
{
    int finalAns = round(1000*((mile*5280)/4854));
    return finalAns;
}
int main()
{
     double mile;
    cin>>mile;
    int ans = calculateMile(mile);
    cout<<ans<<endl;
    return 0;
}