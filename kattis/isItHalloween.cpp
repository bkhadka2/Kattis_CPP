#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;
int main()
{
    string month;
    int date;
    cin>>month>>date;
    //transform(month.begin(),month.end(),month.begin(),::toupper);
    if((month.substr(0,3)=="OCT" && date == 31) || (month.substr(0,3)=="DEC" && date == 25))
    {
        cout<<"yup"<<endl;
    }
    else
    {
        cout<<"nope"<<endl;
    }
    return 0;
}