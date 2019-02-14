#include <iostream>
#include <string>
using namespace std;

void calcModulo(unsigned int number)
{
    int i,j;
    int count =0;
    int temp=0;
    int num = 0;
    int a[10]={};
    for(i=0;i<10;++i)
    {
        cin>>number;
        a[i] = number%42;
        count++;
        
    }
    // cout<<count<<endl;
    // cout<<endl;
    for(i=0;i<10;i++)
    {
        if(a[i]==0 && a[i]==a[i+1])
        {
            num++;
        }
    }
    // cout<<num<<endl;
    // cout<<endl;
    for(i=0;i<10;++i)
    {
        for(j=i+1;j<10;++j)
        {
            if(a[i]==a[j])
            {
                temp++;
            }
        }
    }
    //cout<<temp<<endl;
    if(num==9)
    {
        cout<<1<<endl;
    }
    else if(temp>9)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<count-temp<<endl;
    }
}
int main()
{
    unsigned int num;
    calcModulo(num);

    return 0;
}