#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    string A[N],B[N],C[N],f[N];
    int P[N],Q[N],R[N],ans[N];
    for(i=0;i<N;++i)
    {
        cin>>A[i];
        if(A[i]=="P=NP")
        {
            f[i]="skipped";
        }
        else{
            P[i]=A[i].find("+");
            B[i]=A[i].substr(0,P[i]);
            C[i]=A[i].substr(P[i],A[i].length());
            Q[i]=stoi(B[i]);
            R[i]=stoi(C[i]);
            ans[i]=Q[i]+R[i];
            f[i]= to_string(ans[i]);

        }
        
    }
    for(i=0;i<N;++i)
    {
        cout<<f[i]<<endl;
    }
    return 0;
}