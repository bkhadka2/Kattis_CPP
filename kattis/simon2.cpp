#include <iostream>
#include <string>
using namespace std;

void calcSimon(string what_simon_says)
{
    if(what_simon_says.substr(0,11)=="simon says ")
    {
        cout<<what_simon_says.substr(11,what_simon_says.length())<<endl;
    } 
    else
    {
        cout<<endl;
    }  

}
int main()
{
    int T,i;    
    cin>>T;
    cin>>ws;    
    for(i=0;i<T;i++)
    {
        string name;
        getline(cin,name);
        calcSimon(name);     
    }   
    return 0;
}
