#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{    
    int k,q,r,b,kn,p;
    cin>>k>>q>>r>>b>>kn>>p;
    
    
    if(k>1 || k==0 || k==1)
    {
        int a=0;
        a=(a-k)+1;
        cout<<a<<" ";
    }          
    
    if(q>1 || q==0 ||q==1)
    {
        int c=0;
        c=(c-q)+1;
        cout<<c<<" ";
    }   

    if(r>2 || r==0 || r==2)
    {
        int d=0;
        d=(d-r)+2;
        cout<<d<<" ";
    }
    else
    {
        int d=0;
        d=(d-r)+2;
        cout<<d<<" ";
    }

    if(b>2 || b==0 || b==2)
    {
        int e=0;
        e=(e-b)+2;
        cout<<e<<" ";
    }
    else
    {
        int e=0;
        e=(e-b)+2;
        cout<<e<<" ";
    } 
    
    if(kn>2 || kn==0 || kn==2)
    {
        int f=0;
        f=(f-kn)+2;
        cout<<f<<" ";
    }
    else
    {
        int f=0;
        f=(f-kn)+2;
        cout<<f<<" ";

    }

    if(p>8 || p==0 || p==8)
    {
        int g=0;
        g=(g-p)+8;
        cout<<g<<endl;
    }
    else
    {
        int g=0;
        g=(g-p)+8;
        cout<<g<<endl;
    }
    
    
    cin.ignore(100,'\n');
    cin.get();
       
    return 0;
}
        


   