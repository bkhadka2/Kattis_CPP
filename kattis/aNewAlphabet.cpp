#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
    string name;
    getline(cin,name);
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    int pos,i;
    for(i=0;i<name.length();i++)
    {
        int a=name.find("a");
        if(a>=0)
        {
            name.replace(a,1,"@");
        }
        int b=name.find("b");
        if(b>=0)
        {
            name.replace(b,1,"8");
        } 
        int c=name.find("c");
        if(c>=0)
        {
            name.replace(c,1,"(");
        } 
        int d=name.find("d");
        if(d>=0)
        {
            name.replace(d,1,"|)");
        } 
        int e=name.find("e");
        if(e>=0)
        {
            name.replace(e,1,"3");
        } 
        int f=name.find("f");
        if(f>=0)
        {
            name.replace(f,1,"#");
        } 
        int g=name.find("g");
        if(g>=0)
        {
            name.replace(g,1,"6");
        } 
        int h=name.find("h");
        if(h>=0)
        {
            name.replace(h,1,"[-]");
        } 
        int i=name.find("i");
        if(i>=0)
        {
            name.replace(i,1,"|");
        }
        int j=name.find("j");
        if(j>=0)
        {
            name.replace(j,1,"_|");
        } 
        int k=name.find("k");
        if(k>=0)
        {
            name.replace(k,1,"|<");
        }  
        int l=name.find("l");
        if(l>=0)
        {
            name.replace(l,1,"1");
        } 
        int m=name.find("m");
        if(m>=0)
        {
            name.replace(m,1,"[]\\/[]");
        } 
        int n=name.find("n");
        if(n>=0)
        {
            name.replace(n,1,"[]\\[]");
        }
        int o=name.find("o");
        if(o>=0)
        {
            name.replace(o,1,"0");
        } 
        int p=name.find("p");
        if(p>=0)
        {
            name.replace(p,1,"|D");
        } 
        int q=name.find("q");
        if(q>=0)
        {
            name.replace(q,1,"(,)");
        } 
        int r=name.find("r");
        if(r>=0)
        {
            name.replace(r,1,"|Z");
        }  
        int s=name.find("s");
        if(s>=0)
        {
            name.replace(s,1,"$");
        } 
        int t=name.find("t");
        if(t>=0)
        {
            name.replace(t,1,"']['");
        }
        int u=name.find("u");
        if(u>=0)
        {
            name.replace(u,1,"|_|");
        } 
        int v=name.find("v");
        if(v>=0)
        {
            name.replace(v,1,"\\/");
        } 
        int w=name.find("w");
        if(w>=0)
        {
            name.replace(w,1,"\\/\\/");
        }  
        int x=name.find("x");
        if(x>=0)
        {
            name.replace(x,1,"}{");
        } 
        int y=name.find("y");
        if(y>=0)
        {
            name.replace(y,1,"`/");
        } 
        int z=name.find("z");
        if(z>=0)
        {
            name.replace(z,1,"2");
        } 

    }
    cout<<name<<endl;
    return 0;
}