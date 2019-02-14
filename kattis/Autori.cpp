#include <iostream>
#include<string>
using namespace std;

int main()
{
   string name;
   int position;
   string locate;
   cin >> name;
   cout<<name.substr(0,1);
   
   for(int i=0; i<name.size();++i)
   {
       position=name.find("-");
       if(position>0)
       {
           if (name.substr(position,1)=="-")
            {
                cout<<name.substr(position+1,1);
                name.erase(position,1);
            }

       }
       
       else
        break;
   }
    
   return 0;
} 