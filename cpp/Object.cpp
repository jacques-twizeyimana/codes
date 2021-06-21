#include<iostream>
#include "discount.c++"
using namespace std;

int main(){
    Sale disc(10000);
    cout<<"The bill is : "<< disc.bill()<<endl;

    return 0;
}