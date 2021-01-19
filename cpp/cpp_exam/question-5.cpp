#include<iostream>
using namespace std;

double triangle_area(double base,double h){
    return (h*base)/2;
}

int main(int argc, char const *argv[])
{
    double base,h;
    cout<<"Enter base of a triangle: \t";
    cin>>base;
    cout<<"Enter height of triangle: \t";
    cin>>h;
    cout << "The area of triangle whose base is "<<base<<" and height of "<<h<<" is: "<<triangle_area(base,h)<<endl;
    return 0;
}
