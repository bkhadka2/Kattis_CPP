#include <iostream>
#include <string>
#include <climits>
#include <cstdlib>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    string A[N];    
    unsigned long long int P[N];   
    for(i=0;i<N;++i)
    {        
        cin>>A[i];        
    }    
    for(i=0;i<N;++i)
    {
            P[i]=A[i].length();
    }
    for(i=0;i<N;++i)
    {
       
        cout<<P[i]<<endl;
    }
    return 0;
}