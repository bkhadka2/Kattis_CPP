#include <iostream>
#include <string>
using namespace std;
int main()
{
    int A,B;
    int a,b,c,n;
    int p,q,r,x;
    cin>>A>>B;
    a= A%10;
    n=A/10;
    b= n%10;
    c= n/10;
    p= B%10;
    q=B/10;
    x= q%10;
    r= q/10;
    if(a>p)
    {
        cout<<a<<b<<c<<endl;
    }
    else if(a==p && b>x)
    {
        cout<<a<<b<<c<<endl;
    }
    else if(a==p && b==x && c>r)
    {
        cout<<a<<b<<c<<endl;
    }
    else
    {
        cout<<p<<x<<r<<endl;
    }
    return 0;
}