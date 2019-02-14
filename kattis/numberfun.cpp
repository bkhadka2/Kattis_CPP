#include<iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    double a,b,c;
    int i;
    cin>>N;
    string A[N]={};
    for(i=0;i<N;++i)
    {
        cin>>a>>b>>c;
        if (a+b==c || a/b==c ||b/a==c || a-b==c || b-a==c ||a*b==c )
        {
            A[i]="Possible";
        }
        else{
            A[i]="Impossible";
        }
    }
    for(i=0;i<N;++i)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}