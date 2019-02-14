#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b,c,d,e,f,g;
    int bis,temp,con1,con2,con3,con4,fin1,fin2,fin3,fin4;
    while(cin>>a>>fin1>>fin2>>b>>c)
    {
        bis=b.find(":");
        d=b.substr(0,bis);
        con1=stoi(d);
        f=b.substr(bis+1,b.length());
        con2=stoi(f);
        temp=c.find(":");
        e=c.substr(0,temp);
        con3=stoi(e);
        g=c.substr(temp+1,c.length());
        con4=stoi(g);
        fin3=con3-con1;
        fin4=con4-con2;
        if(fin4<0)
        {
            fin3=(con3-con1)-1;
            fin4=(60+(con4-con2));
        }
        cout<<a<<" "<<fin1<<" "<<fin2<<" "<<fin3<<" "<<"hours"<<" "<<fin4<<" "<<"minutes"<<endl;

    }
    
    return 0;
}