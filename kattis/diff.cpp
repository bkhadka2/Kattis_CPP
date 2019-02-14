#include <iostream>
#include <string>
using namespace std;
int main()
{
    long int a,b,c;
   
    while(cin>>a>>b)
    {
        
        
            if(a>b)
                c=a-b;
            else
                c=b-a;
            cout<<c<<endl;
        
    }
    
   return 0;
}