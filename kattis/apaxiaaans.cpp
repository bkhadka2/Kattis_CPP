#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string word,letter,let;    
    cin>>word;    
    int i=0;
    while(i<word.length())    
    {
        for(int j=0;j<word.length();++j)
        {
            if(word[j]==word[j+1])
            {            
            letter=word.erase(j+1,1);            
            }
        }
        for(int j=0;j<word.length();++j)
        {
            if(word[j]==word[j+1])
            {
                letter=word.erase(j+1,1);                          
            }                                
        }        
    ++i;        
    }
    for(int j=0;j<word.length();++j)
        {
            if(word[j]!=word[j+1])
            {
                letter=word;                          
            }                                
        }       
    cout<<letter<<endl;        
    return 0;
}    