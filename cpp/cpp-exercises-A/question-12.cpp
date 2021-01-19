#include<iostream>
#include<cmath>
using namespace std;

const float pi = 22/7;
float area_of_circle(float radius){
    return (pow(radius,2) * pi);
}

float circ_of_circle(float radius){
    return (radius * pi) * 2;
}

int main(int argc, char const *argv[]){
    float rad;
    cout << "Enter the radius of the circle:\t";
    cin>>rad;
    cout << "The circumference of this circle is : " << circ_of_circle(rad) << endl;
    cout << "The area of this circle is : " << area_of_circle(rad) << endl;
    return 0;
}