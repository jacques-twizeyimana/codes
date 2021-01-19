#include <iostream>
using namespace std;

string is_positive(int num){
    return num > 0 ? "positive" : num == 0 ? "Zero": "Negative";
}
int main(){
    int num;
    cout << "Enter number :\t";
    cin >> num;    
    cout << "This number is " <<is_positive(num) <<endl;
    return 0;
}