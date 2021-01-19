#include<iostream>
#include<cmath>
using namespace std;

float vol_of_cube(float side){
    return pow(side,3);
}

int main(int argc, char const *argv[]){
    float s;
    cout << "Enter the the length of side of the cube:\t";
    cin>>s;

    cout << "The total volume of this cube is : " << vol_of_cube(s) << endl;
    return 0;
}