#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,j;
    cin>>N;
    string a,b,fin;
    cin>>a;
    cin>>b;
    int i;
    // for(i=0;i<a.length();++i)
    // {
        for(j=0;j<a.length();++j)
        {
            if(N%2==0)
            {
                if(a[j]==b[j])
                {
                    fin="Deletion succeeded";
                }
                else
                {
                    fin="Deletion failed";
                }
                if(fin=="Deletion failed")
                {
                    break;
                }

            }
            if(N%2==1)
            {
                if(a[j]!=b[j])
                {
                    fin="Deletion succeeded";
                }
                else
                {
                    fin="Deletion failed";
                }
                if(fin=="Deletion failed")
                {
                    break;
                }

            }
                        
            
        }
        
    //}
    cout<<fin<<endl;
    return 0;
}