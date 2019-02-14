#include <iostream>
#include <string>
using namespace std;
const int maxdata=100;
struct Stattype
{
    int data;
};

void swapem(Stattype &num1, Stattype &num2)
{
    Stattype arrange;
    arrange=num1;
    num1=num2;
    num2=arrange;
}

void sortem(Stattype Stat[], int numdata)
{
    int i,j;
    for(j=0;j<numdata-1; j++)
    {
        for(i=0;i<numdata-1;i++)
            if(Stat[i].data>Stat[i+1].data) swapem(Stat[i], Stat[i+1]); 
    }        
}

void printem(Stattype Stat[], int numdata)
{
    int i;
    static int j;
    cout<<"case"<<" "<<++j<<":"<<" ";
    cout<<Stat[0].data<<" "<<Stat[numdata-1].data<<" "<<Stat[numdata-1].data-Stat[0].data<<endl;
}

void readem(Stattype Stat[], int &numdata)
{
    int i;
    int data;
    while(cin>>numdata)
    {
        for(i=0;i<numdata;++i)
        {
            cin>>Stat[i].data;
        }
        sortem(Stat,numdata);
        
        printem(Stat,numdata);
        
    }    
    numdata=i;
}

int main()
{
    Stattype Stat[maxdata];
    int numdata;
    int data;
    int i;
    int num;
    readem(Stat,numdata);
    return 0;
}