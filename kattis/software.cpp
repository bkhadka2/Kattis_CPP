#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> number_list{1,2,3,4};
    int i,j,count;
    count =0;
    int a = sizeof(number_list)/ sizeof(number_list[0]);
    for(i=0;i<a;i++)
    {
        
        for(j=i+1;j<a;j++)
        {
            if((number_list[i]+number_list[j])==8)
            {
                cout<<number_list[i]<<" and "<<number_list[j]<<endl;
                count ++;
            }
            
        }
    }
    
    if(count >0)
    {
        cout<<"Success"<<endl;
    }
    else
    {
        cout<<"failure"<<endl;
    }
    return 0;
}