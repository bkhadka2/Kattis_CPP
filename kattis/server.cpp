#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,T,i;
    cin>>n>>T;
    int A[n];
    int count=0;
    int C=0;
    for(i=0;i<n;++i)
    {
        cin>>A[i];
        C+=A[i];
        if(C<=T)
        {
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}