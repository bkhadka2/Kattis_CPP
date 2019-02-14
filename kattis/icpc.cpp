#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    string name[N]={};
    string tName[N]={};
    // string news[12]={};
    // string newt[12]={};
    //int count =0;
    for (i=0;i<N;i++)
    {
        //cin>>ws;
        cin>>name[i]>>tName[i];
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {   
            if(name[i]==name[j])
            {
                return i;
            }
        }  
          
    }
    

    
    
    return 0;
}