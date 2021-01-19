#include<iostream>
using namespace std;

void print_asc(int num1,int num2,int num3){
    int arr_length = 3;
    int numbers[arr_length] = {num1,num2,num3};

    for (int i = 0; i < arr_length; i++){
        for (int y = i+1; y < arr_length; y++){
            if(numbers[i] > numbers[y]){
                int temp = numbers[i];
                numbers[i] = numbers[y];
                numbers[y] = temp;
            }
        }
    }
    cout << "Numbers in ascending order:\t";
    for (int k = 0; k < arr_length; k++){
        cout << numbers[k]<< (k != arr_length -1 ? " , " :"");
    }
    cout <<endl;
    
}

int main(int argc, char const *argv[]){
    int num1,num2,num3;    
    cout << "Enter three numbers:\t";
    cin >> num1 >> num2 >> num3;

    print_asc(num1,num2,num3);
    return 0;
}