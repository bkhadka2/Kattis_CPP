#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,i;
    int pos,st;
    cin>>N;
    string name,out;
    
    for(i=0;i<=N;++i)
    {
        getline(cin,name);
        //pos=name.find("says");
        if(name.substr(0,10)=="Simon says")
        {
            cout<<name.substr(11,name.length())<<endl;
        }
        
        // else
        // {
        //     out[i]=name.erase(0,name.length());
        // }
        
    }
    
    return 0;
}
