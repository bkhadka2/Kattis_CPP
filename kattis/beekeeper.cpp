#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, N;   
    do
    {
        cin>>N;
        if (N==0)
        {
            break;
        }
        int trackCount[N]={};
        string name[N]={};
        for(i=0;i<N;i++)
        {
            cin>>name[i];
        }
        for(i=0;i<N;i++)
        {
            int count=1;
            for(j=0;j<name[i].length();j++)
            {
                if(name[i][j]=='a' && name[i][j+1]=='a')
                {
                    trackCount[i]=(count++);                
                }
                if(name[i][j]=='e' && name[i][j+1]=='e')
                {
                    trackCount[i]=(count++);                
                }
                if(name[i][j]=='i' && name[i][j+1]=='i')
                {
                    trackCount[i]=(count++);                
                }
                if(name[i][j]=='o' && name[i][j+1]=='o')
                {
                    trackCount[i]=(count++);                
                }
                if(name[i][j]=='u' && name[i][j+1]=='u')
                {
                    trackCount[i]=(count++);                
                }
                if(name[i][j]=='y' && name[i][j+1]=='y')
                {
                    trackCount[i]=(count++);                
                }
            }
        }
        
        int max = trackCount[0];
        for(int big: trackCount)
        {
            if(big>max)
            {
                max = big;
            }
        }
        for(i=0;i<N;i++)
        {
            if(trackCount[i]==max)
            {
                cout<<name[i]<<endl;
            }
        }
        
    }while(N!=0);    
    return 0;
}