#include <iostream>
#include<cmath>
using namespace std;

float celcius_to_fh(float celcius){
    return ((celcius * 9) / 5) + 32;
}
int main(){
    float celc;
    cout << "Enter temperature is degree celcius :\t";
    cin >> celc;
    cout <<celc <<" degree celcius is equivalent to "<< celcius_to_fh(celc) << endl;
    return 0;
}