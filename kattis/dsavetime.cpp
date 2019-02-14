#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string A;
    int D,H,M,N;
    int fh,fm,sm;
    int i;
    cin>>N;
    for(i=0;i<N;++i)
    {
        cin>>A>>D>>H>>M;
        if(D==0)
        {
            cout<<H<<" "<<M<<endl;
        }
        if(A=="B" && D==60)
        {
            fh=H-1;
                if(fh==0)
                {
                    fh=24;
                }
                if(fh<0)
                {
                    fh=24+fh;
                }
                if(fh==24)
                {
                    fh=0;
                }
            cout<<fh<<" "<<M<<endl;
        }
        if(A=="B" && D==120)
        {
            fh=H-2;
                if(fh==0)
                {
                    fh=24;
                }
                if(fh<0)
                {
                    fh=24+fh;
                }
                if(fh==24)
                {
                    fh=0;
                }
            cout<<fh<<" "<<M<<endl;
        }
        if(A=="B" && D!=0 && D!=60)
        {
            fm=abs(M-D);
            if(fm>=60)
            {
                fh=H-1;
                if(fh==0)
                {
                    fh=24;
                }
                if(fh<0)
                {
                    fh=24-H;
                }
                if(fh==24)
                {
                    fh=0;
                }
                cout<<fh<<" "<<abs(60+M-D)<<endl;
            }
            if(fm<60 && M>=D)
            {
                cout<<H<<" "<<M-D<<endl;
            }
            if(fm<60 && M<D)
            {
                fh=H-1;
                if(fh==0)
                {
                    fh==24;
                }
                if(fh<0)
                {
                    fh=23-H;
                }
                if(fh==24)
                {
                    fh==0;
                }
                sm=abs(60+M-D);
                if(sm==60)
                    cout<<H<<" "<<M-D<<endl;
                else
                    cout<<fh<<" "<<sm<<endl;
            }
        }

        if(A=="F" && D==60)
        {
            fh=H+1;
            if(fh==24)
            {
                fh=0;
            }
            if(fh>24)
            {
                fh=abs(24-(H+1));
            } 
            cout<<fh<<" "<<M<<endl;
        }
        if(A=="F" && D==120)
        {
            fh=H+2;
            if(fh==24)
                {
                    fh=0;
                }
                if(fh>24)
                {
                    fh=abs(24-(H+2));
                } 
            cout<<fh<<" "<<M<<endl;
        }
        
        if(A=="F" && D>0 && D!=60 && D!=120 )
        {            
            fm=D+M;
            if(fm>=60 && fm<120)
            {
                fh=H+1;
                if(fh==24)
                {
                    fh=0;
                }
                if(fh>24)
                {
                    fh=abs(24-(H+1));
                }                
                sm=abs(60-fm);                            
                cout<<fh<<" "<<sm<<endl;
            }
            if(fm>=120)
            {
                fh=H+2;
                if(fh==24)
                {
                    fh=0;
                }
                if(fh>24)
                {
                    fh=abs(24-(H+2));
                }
                sm=abs(120-fm);                            
                cout<<fh<<" "<<sm<<endl;  
            }
            
            if(fm<60)
            {
                cout<<H<<" "<<fm<<endl;
            }
        }           
    }    
    return 0;
}