#include <iostream>
#include <string>
using namespace std;
const int maxnumber=100;
struct cups 
{
    string C;
    unsigned int R;
    int A;
};

void swapem(cups &num1, cups &num2)
{
    cups arrange;
    arrange=num1;
    num1=num2;
    num2=arrange;
}

void sortem(cups cup[], int numcups)
{
    int i,j;
    //cups temp[numcups];
    for(j=0;j<numcups-1;++j)
    {
        for(i=0;i<numcups-1;++i)
        {
            if(cup[i].R > cup[i+1].R)
            {
                swapem(cup[i], cup[i+1]);
            }
        }
    }
}
void printem(cups cup[], int numcups)
{
    int i;
    for(i=0;i<numcups;++i)
    {
        cout<<cup[i].C<<" "<<cup[i].R<<endl;
    }
}

void readem(cups cup[], int &numcups)
{
    int i;
    cin>>numcups;
    
    //cups temp[numcups];
    for(i=0;i<numcups;++i)
    {
        if(cin>>cup[i].C>>cup[i].R)
        {
            cup[i].R=cup[i].R;
        }
        //else
        if(cin>>cup[i].R>>cup[i].C)
        {
            cup[i].R=(cup[i].R)/2;
            //cout<<cup[i].C<<cup[i].R<<endl;
        }
    }
    //numcups=i;
    sortem(cup, numcups);
    printem(cup, numcups); 
}
int main()
{
    cups cup[maxnumber];
    unsigned int R;
    int numcups;
    string C;
    readem(cup, numcups);
    //sortem(cup, numcups);
    //printem(cup, numcups);    
    return 0;
}