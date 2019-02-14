#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    int n;
    int sum=0;
    int largest;
    for(i=0;i<T;++i)
    {
        cin>>n;
        int A[n];
        for(i=0;i<n;++i)
        {
            cin>>A[i];
            sum+=A[i];
        }
        for(i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(A[i]>A[j+1])
                {
                    largest=A[i];
                }
            }
        }
        for(i=0;i<n;++i)
        {
            //int A[n];
            if(A[i]>(sum/2) && A[i]==largest)
            {
                cout<<"majority winner"<<" "<<i+1<<endl;
            }
            if(A[i]==A[i+1])
            {
                cout<<"no winner"<<endl;
            }
            if(A[i]<(sum/2) && A[i]==largest)
            {
                cout<<"minority winner"<<" "<<i+1<<endl;
            }
        }
    
        
    }
    
    return 0;
}