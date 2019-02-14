#include <iostream>
#include <string>
using namespace std;
int main()
{
   int i, N,O,j;
   cin>>N;
   
   for(i=0;i<N;++i)
   {
       cin>>O;
       int A[O];
       for(i=0;i<O;++i)
       {
           cin>>A[i];
       }
       for(i=0;i<O;++i)
       {
           int count=0;
           int temp = 0;
            for(j=0;j<O;++j)
            {
                int A[O];
                if(A[i]==A[j])
                {
                    count++;
                } 
                else 
                {
                    temp++;
                }      
            }
            cout<<count<<endl;
            cout<<temp<<endl;
       }
              
   }
   

   
    return 0;
}