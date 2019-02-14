#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T, N, i,x,q,r,h;
    string a,b,c,f;
    cin>>T;
    int fin[T];
    for(i=0;i<T;++i)
    {
        cin>>N;
        if(N%100==0)
        {
            a=to_string(N);
            x=a.find("0");           
           
            if(N%100000==0)
            {
                fin[i]=N-100000;
                cout<<fin[i]<<endl;
            }
            else if(N%10000==0)
            {
                fin[i]=N-10000;
                cout<<fin[i]<<endl;
            }
            else if(N%1000==0)
            {
                fin[i]=N-1000;
                cout<<fin[i]<<endl;
            }
            else if(N%100==0)
            {
                fin[i]=N-100;
                cout<<fin[i]<<endl;
            }
            else if(x==1)
            {
                b=a.substr(0,x+1);
                c=a.substr(x+1,a.length());
                h=stoi(c);
                f=a.substr(x+2,a.length());
                if(h%100==0 && h/100>1)
                {
                    fin[i]=h-100;
                    cout<<b<<fin[i]<<endl;
                }
                if(h%100==0 && h/100==1)
                {
                    fin[i]=h-100;
                    cout<<b<<fin[i]<<f<<endl;
                }
            }
            else
            {
                b=a.substr(0,x);
                c=a.substr(x,a.length());
                q=stoi(b);
                fin[i]=q-1;
                cout<<fin[i]<<c<<endl;
            }

        }
        else if(N%10==0)
        {
            fin[i]=N-10;
            cout<<fin[i]<<endl;
        }
        else
        {
            fin[i]=N-1;
            cout<<fin[i]<<endl;
        }
    }
    return 0;
}