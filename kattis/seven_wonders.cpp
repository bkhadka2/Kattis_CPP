#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string name;
    cin>>name;
    int i,j,min;
    int let = name.length();
    int C=0;
    int T=0;
    int G=0; 
    for(i=0;i<let;i++)
    {
        if(name[i]=='T')
        {
            T++;
        }
        if(name[i]=='C')
        {
            C++;
        }
        if(name[i]=='G')
        {
            G++;
        }
    }
    //cout<<T<<C<<G<<endl;
    if(C<=G && C<=T)
    {
        min = C;
    }
    else if(T<=C && T<=G)
    {
        min = T;
    }
    else
    {
        min = G;
    }
    //cout<<min<<endl;
    if(T>=1 || C>=1 || G>=1)
    {
        int cal = pow(T,2) + pow(C,2) + pow(G,2) + min*7;
        cout<<cal<<endl;
    }
    return 0;
}