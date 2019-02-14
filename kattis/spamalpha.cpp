#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    int i;
    double a, b, c, d;
    cin>>word;
    double count=0.0;
    double num=0.0;
    double temp=0.0;
    double val=0.0;
    for(i=0;i<word.length();++i)
    {
        if(int(word[i])>=97 && int(word[i])<=122)
        {
            count++;
            a= count/word.length();

        }
        
        else if(int(word[i])==95)
        {

            num++;
            b= num/word.length();

        }
        
        else if(int(word[i])>=65 && int(word[i])<=90)
        {
            val++;
            d= val/word.length();

        }
        else
        {
            temp++;
            c= temp/word.length();
        }
        

    }
    
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<d<<endl;
        cout<<c<<endl;
    
    
    return 0;
}