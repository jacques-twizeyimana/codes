#include<iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* int sum=0,i=1;

    sum+=i;
    cout << sum;
    for(i=1;i<10;i++){
        sum+=i;
    }
    cout<<sum;
    */

    /* int x,y,pow=1;
    cout<< "Enter The number x you want\t";
    cin>>x;
    cout<<"Enter number for power y\t";
    cin>>y;
    for(int i=0;i<y;i++){
        pow*=x;
    }
    cout<< x <<" Power "<<y<<" is: "<<pow<<endl; */

    
    int sum=0;
    for(int i=0;i<100;i++){
        if(i%2 == 0) sum+=i;
    }

    cout <<"The sum of all even numbers less than 100 is: "<<sum<<endl;

    int product=1;
    for(int i=1; i<20;i++){
        if(i%2 != 0) product*=i;
    }
    cout<<"The product of all odd numbers less than 20 is: "<<product<<endl;
    return 0;
}
