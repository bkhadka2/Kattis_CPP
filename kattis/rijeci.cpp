#include <iostream>
#include <string>
using namespace std;
int fib(int num) {
    cin>>num;
	if (num == 1) //base case
        cout<< 1;
		//cout<<0<<" "<<1<<endl;
	else if (num == 1) // base case
        cout<< 1;
	 	//cout<< 1<<" "<<1<<endl;
	else //general case
        cout<< fib(num-1) + fib(num-2);
		//cout<< fib(num-1) + fib(num-2)<<" "<<fib(num-2) + fib(num-3)<<endl;
        //return 0;
}

int main()
{
    int num;
    //cin>>num;
    fib(num);

    return 0;
}