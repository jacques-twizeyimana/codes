#include<iostream>
#include<cmath>
using namespace std;

void hypothenusRule(int max) 
{ 
    //let a and b be first and second sides of triangle respectively
    for (int a = 1; a < max; a++)//a less than limit
    {
        for (int b = 1; b <= a; b++) //b must be less than or equal to a to aviod repeatition
        {
            float hypo =sqrt(pow(a,2) + pow(b,2) ); // hypothenus = square root of a^2 + b^2
            if((int)hypo == hypo){//check if hypo is int
                cout << "("<<a<<","<<b<<","<<hypo<<"), ";
            } 
        }      
       
    }
} 

int main(int argc, char const *argv[])
{
   hypothenusRule(100);
   cout<<endl;
return 0;
}
