#include<iostream>
using namespace std;

float area_of_rect(float l,float w){
    return l*w;
}

float permiter_of_rect(float l,float w){
    return (l+w) * 2;
}

int main(int argc, char const *argv[])
{
    float width,length;

    cout << "Enter width of rectangle:\t";
    cin>>width;
    cout<<"Enter length of rectangle:\t";
    cin >> length;

    cout << "The perimiter of this rectangle is : " << permiter_of_rect(length,width) << endl;
    cout << "The area of this rectangle is : " << area_of_rect(length,width) << endl;
    return 0;
}