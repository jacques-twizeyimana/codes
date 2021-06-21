/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* 

Multiple inheritance

Base
Exponent
Power

*/

#include <iostream>

using namespace std;

class base{
    
    protected :
       int ba;
    public :
       void input_base( )
           {
              cout<<"Enter the base :=";
              cin>>ba;
           }
           
           void show_base( )
           {
              cout<<"base :="<<ba<<endl;
           }
    
};


class exponent{
    
     protected :
       int exp;
    public :
       void input_exp( )
           {
              cout<<"Enter the exponent :=";
                 cin>>exp;
            }
            void show_exp( )
            {
               cout<<"exponent="<<exp<<endl;
            }
    
};


class power : public base, public exponent{
    
    int po;
    
    public :
        void input( )
            {
               input_base ( );
                input_exp( );
            };
            
        void show( )
        {
           show_base( );
           show_exp( );
           int i;
           po=1;
           for(i=1;i<=exp;i++)
           po=po*ba;
           cout<<"power :="<<po<<endl;
           }
    
};

int main(){
    
    power o1;
    o1.input( );
    o1.show( );
    
    return 0;
}




