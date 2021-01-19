#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const double PI=3.14159265;
    float circ,r,area;
    cout<<"Enter the radius of the circle\n";
    cin >> r;
    circ = r * 2* PI;
    area = r * r * PI;

    cout << "The circumference of circle with radius of " << r << " is " << circ << endl;
    cout << "The area of circle with radius of " << r << " is " << area << endl;
    return 0;
}