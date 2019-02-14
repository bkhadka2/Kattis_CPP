#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin>>word;
    if(word.substr(word.length()-1,1)=="A")
    {
        cout<< "2"<<endl;
    }
    else if(word.substr(word.length()-1,1)=="B")
    {
        cout<< "3"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }

    return 0;

}