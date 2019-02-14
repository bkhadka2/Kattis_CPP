#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    int cases,i;
    cin>>cases;
    string a[cases];
    string b[cases];
    string c[cases];
    string name[cases],date[cases],DOB[cases];
    int course[cases];
    int ans[cases];
    int check[cases];
    for(i=0;i<cases;++i)
    {
        cin>>name[i]>>date[i]>>DOB[i]>>course[i];
        b[i]=date[i].substr(0,4);
        c[i]=DOB[i].substr(0,4);
        ans[i]=stoi(b[i]);
        check[i]=stoi(c[i]);
    }
    for(i=0;i<cases;++i)
    {

        if( ans[i]>=2010)
        {
            a[i]="eligible";
        }
        else if(check[i]>=1991)
        {
            a[i]="eligible";
        }
        else if( (ans[i]<2010 && check[i]<1991) && course[i]>=41)
        {
            a[i]="ineligible";
        }
        else
        //if(((ans[i]<2010 && check[i]>1991)||(ans[i]>2010 && check[i]<1991) || (ans[i]<2010 &&check[i]<1991)) && course[i]<41)
        {
            a[i]="coach petitions";
        }
    }
    for(i=0;i<cases;++i)
    {
        cout<<name[i]<<" "<<a[i]<<endl;
    }
    
    return 0;
}