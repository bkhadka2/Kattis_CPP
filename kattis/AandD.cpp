#include <iostream>
#include <string>
using namespace std;
int main()
{
    double A,N;
    cin>>A;
    cin>>N;
    if( N>=(2*A))
    {
        cout<<"Diablo is happy!"<<endl;
    }
    else
    {
        cout<<"Need more materials!"<<endl;
    }
    return 0;
}