#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    double sum=0;
    double count=0;
    int num;
    cin>>num;
    int batter[num]={0};
    for(int i=0; i<num; ++i)
    {
        cin>>batter[i];
        if(batter[i]>=0)
        {
            sum+=batter[i];
            count++;
        }
        else
        {
            batter[i]=batter[i+1];
        }
    }
    cout<< sum/count<<endl;
    return 0;

}
