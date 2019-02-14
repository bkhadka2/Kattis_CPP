#include <iostream>
#include <string>
#include<iomanip>
#include<fstream>
#include <cmath>
using namespace std;
int main()
{
    int C, N,i,j;
    cin>>C;
    for(i=0;i<C;++i)
    {
        double count=0;
        double total=0;
        double average;
        double a;
        cin>>N;
        int A[N];
        for(j=0;j<N;++j)
        {
            cin>>A[j];
            total+=A[j];
            average=total/N;            
        }
        for(j=0;j<N;++j)
        {
            if(A[j]>average)
            {
                a=count++;
                
            }
        }
        cout<<fixed<<setprecision(3)<<(count/N)*100<<"%"<<endl;
    }
    return 0;
}