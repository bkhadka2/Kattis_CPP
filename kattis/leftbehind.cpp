#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
        {
            break;
        }
        if(x+y==13)
        {
            cout<<"Never speak again."<<endl;
        }
        if(x>y && (x+y)!=13)
        {
            cout<<"To the convention."<<endl;
        }
        if(x<y && (x+y)!=13)
        {
            cout<<"Left beehind."<<endl;
        }
        if(x==y)
        {
            cout<<"Undecided."<<endl;
        }
    }
    return 0;

}