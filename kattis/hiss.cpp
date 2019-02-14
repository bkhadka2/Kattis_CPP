#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string word,str;
    int pos;
    cin>>word;
    ////for(int i=0;i<word.size();++i)
    //{
    pos=word.find("ss");
        

    //}
    str=word.substr(pos,2);
    
    if(word=="ss")
        cout<<"hiss"<<endl;
    for(int i=0;i<word.length();++i)
    {
        if (word[i]!=word[i+1])
            cout<<"no hiss"<<endl;
    } 
        //cout<<"no hiss"<<endl;
    cin.get();
    cin.ignore(1000,'\n');

    return 0;

}