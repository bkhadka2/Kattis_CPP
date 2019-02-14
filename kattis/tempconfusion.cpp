#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int numerator, int denominator)
{
    if(denominator==0)
    {
        return  numerator;
    }
    else
    {
        return gcd(denominator, numerator%denominator);
    }
}
int main()
{
    int numerator, denominator,fraction;
    string input,s1,s2;
    long long int a,b,f1,f2,f3,f4;
    cin>>input;
    f1=input.find("/");
    s1=input.substr(0,f1);
    s2=input.substr(f1+1);
    a=stoi(s1);
    b=stoi(s2);
    //f3=a/gcd(a,b);
    //f4=b=gcd(a,b);
    f3=(5*a)-(160*b);
    numerator=abs(f3);
    denominator=9*b;
    f2=gcd(numerator,denominator);
    if(f3<0)
        cout<<"-"<<numerator/f2<<"/"<<denominator/f2<<endl;
    else
        cout<<numerator/f2<<"/"<<denominator/f2<<endl;
    return 0;
}