#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int i;
    int count =0;
    int temp =0;
    for(i=0;i<name.length();i++)
    {
        if(name[i]=='s' && name[i+1]=='s')
        {
            count++;
        }
        else
        {  
            temp++;
        }
    }
    if(count>0)
    {
        cout<<"hiss"<<endl;
    }
    else
    {
        cout<<"no hiss"<<endl;
    }
    return 0;
}