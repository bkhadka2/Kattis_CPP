#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
void total()
{
    int N;
    int a;
    cin>>N;
    int P[N]={0};    
    int b;
    int c=0;
    for(int i=0;i<N;i++)
    {        
        cin>>P[i];        
        a=P[i]/10;
        b=P[i]%10;
        c+=(pow(a,b));             
    }
    cout<<c<<endl;
}
int main()
{    
    total();
    return 0;
}