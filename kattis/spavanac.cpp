#include <iostream>
#include <string>
using namespace std;
int main()
{
    int H, M;
    int nH, nM;
    cin>>H>>M;
    if(M>=45 && M<=59)
    {
        nH=H;
        nM=M-45;
    }
        
    if(M>=0 && M<45)
    {
        nH=H-1;
        nM=(60+M)-45;
    }
    if(H==0 && (M>=0 && M<45))
    {
        nH=23;
        nM=(60+M)-45;
    }
    if(H==0 &&(M>=45 && M<=59))
    {
        nH=H;
        nM=M-45;
    }
    cout<<nH<<" "<<nM<<endl;
    return 0;    
}