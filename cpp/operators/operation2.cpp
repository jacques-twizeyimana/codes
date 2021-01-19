#include<iostream>
using namespace std;

int main(){
	int y=20,x=10,z=5,t=2,s=7;
	int h=x*y/z%s*t - s*x/t + y/x*t,f=x*(y/z%s)*t - s*(x/t) + y/(x*t);
	cout<<"The value of h: "<<h<<endl;
	cout<<"The value of f: "<<f<<endl;

	return 0;
}
