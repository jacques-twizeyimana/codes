#include <iostream>
#include<cmath>

using namespace std;
const float pi = 22 / 7;

float sphere_volume(double radius){
    float volume = (pow(radius,3) * pi * 4) / 3;
    return volume;
}
int main(){
    double rad;
    cout << "Enter The radius of the sphere :\t";
    cin >> rad;
    cout << "The volume of the sphere is whose radius of "<<rad<<" is " << sphere_volume(rad) << endl;
    return 0;
}