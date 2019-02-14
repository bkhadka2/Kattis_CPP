#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,i,j;
    cin>>N;
    string A[N];
    string fin;
    for(i=0;i<N;++i)
    {
        cin>>A[i];
    }

    for(i=0;i<N-1;++i)
    {
        for(j=0;j<N-1;++j)
        {
           
        if(int(A[i][0]) >= int(A[j+1][0]))
        {
            fin="DECREASING";
        }
        else if(int(A[i][0]) <= int(A[j+1][0]))
        {
            fin="INCREASING";
        }
        else
        //if((int(A[i][0]) > int(A[i+1][0])) && (int(A[N-1][0]) < int(A[N-2][0])) || (int(A[i][0]) < int(A[i+1][0])) && (int(A[N-1][0]) > int(A[N-2][0]))|| (int(A[N/2][0]) > int(A[(N/2)+1][0])) && (int(A[N/2][0]) < int(A[(N/2)+1][0])))
        {
            fin="NEITHER";
        }
        
        }

    }
    // for(i=0;i<N;++i)
    // {
    //     if((fin[i]=="INCREASING" && fin[i+1]=="DECREASING") || (fin[i]=="DECREASING" && fin[i+1]=="INCREASING"))
    //     {
    //         fin[i]="NEITHER";
    //     }

    // }
    cout<<fin<<endl;
    
    return 0;
}