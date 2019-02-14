#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    if(N<M && M-N==1)
    {
        cout<<"Dr. Chaz will have" <<" "<<M-N<<" "<<"piece of chicken left over!"<<endl;
    }
    if(N<M && M-N!=1)
    {
        cout<<"Dr. Chaz will have" <<" "<<M-N<<" "<<"pieces of chicken left over!"<<endl;
    }
    if(N>M && N-M==1)
    {
        cout<<"Dr. Chaz needs"<<" "<<N-M<<" "<<"more piece of chicken!"<<endl;
    }
    if(N>M && N-M!=1)
    {
        cout<<"Dr. Chaz needs"<<" "<<N-M<<" "<<"more pieces of chicken!"<<endl;
    }
    return 0;
}