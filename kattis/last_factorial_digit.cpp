#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    for(int i=0;i<T;++i)
    {
        cin>>N;
        int max = 1;
        for(int j=1;j<=N;++j)
        {
            
            max = max * j;
        }
        string str = to_string(max);
        int len = str.length();

        cout<<str[len-1]<<endl;
    }
    return 0;

}