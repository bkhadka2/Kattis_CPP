#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j;
    int num, cityNum;
    cin>>num;
    for(i=0;i<num;i++)
    {
        int count =0;
        cin>>cityNum;
        string cityName[cityNum]={"a"};
        for(j=0;j<cityNum;j++)
        {
            cin>>cityName[j];
        }
        for (int i=0; i<cityNum; i++) 
        {   
            for (j=0; j<i; j++) 
                if (cityName[i] == cityName[j]) 
                    break; 
 
            if (i == j) 
                count++;
        } 
        cout<<count<<endl;
    }
    return 0;
}