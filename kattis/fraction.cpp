#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    int numerator, denominator;
    int a[i];
    int b[i];
    int c[i];
    do
    {
        i=0;
        cin>>numerator>>denominator;
        if(numerator!=0 && denominator!=0)
        {
            a[i]=numerator/denominator;
            b[i]=numerator%denominator;
            c[i]=denominator;
            cout<<a[i]<<" "<<b[i]<<" "<<"/"<<" "<<c[i]<<endl;
            
        }
        else 
            break;
        ++i;
        
    }while(numerator!=0 && denominator!=0);
    return 0;
}