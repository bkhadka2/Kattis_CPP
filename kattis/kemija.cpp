#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,pos;
    string a,b;
    getline(cin,a);
    
    for(i=0;i<a.length();++i)
    {
        pos=a.find("apa");
        cout<<pos<<endl;
        a.replace(pos,3,"a");
        
    }
    cout<<a<<endl;
    
    
    return 0;
}