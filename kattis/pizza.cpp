#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int R,C;
    double answer,percent;
    cin>>R>>C;
    answer=((M_PI*(R-C)*(R-C))/(M_PI*R*R))*100;
    cout<<fixed<<setprecision(6)<<answer<<endl;
}