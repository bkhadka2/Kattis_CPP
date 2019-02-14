#include <iostream>
#include <string>
using namespace std;
int main()
{
    int A,B,C;
    
    char x;
    char y;
    char z;
    int P,Q,R;
    cin>>A>>B>>C;
    cin>>x>>y>>z;
    
        if(A<B && A<C)
        {
            P=A;        
        }
            
        if(B<A && B<C)
        {
            P=B;        
        }

        if(C<A && C<B)
        {
            P=C;        
        }

        if(A>B && A<C)
        {
            Q=A;        
        }
        if(A<B &&A>C)
        {
            Q=A;
        }
        
        if(B<A && B>C)
        {
            Q=B;
        }
        if(B>A && B<C)
        {
            Q=B;
        }

        if(C<B && C>A)    
        {    
            Q=C;
        }
        if(C<A && C>B)
        {
            Q=C;
        }

        if(A>B && A>C)
        {
            R=A;        
        }

        if(B>A && B>C)
        {
            R=B;
        }

        if(C>A && C>B)
        {    
            R=C;        
        }
        if(int(x)==65 && int(y)==66 &&int(z)==67)
        {
            cout<<P<<" "<<Q<<" "<<R<<endl;
        }
        if(int(x)==65 && int(y)==67 && int(z)==66)
        {
            cout<<P<<" "<<R<<" "<<Q<<endl;
        }
        if(int(x)==66 && int(y)==65 &&int(z)==67)
        {
            cout<<Q<<" "<<P<<" "<<R<<endl;
        }
        if(int(x)==67 && int(y)==65 &&int(z)==66)
        {
            cout<<R<<" "<<P<<" "<<Q<<endl;
        }
        if(int(x)==66 && int(y)==67 &&int(z)==65)
        {
            cout<<Q<<" "<<R<<" "<<P<<endl;
        }
        if(int(x)==67 && int(y)==66 &&int(z)==65)
        {
            cout<<R<<" "<<Q<<" "<<P<<endl;
        }
    
    return 0;
}