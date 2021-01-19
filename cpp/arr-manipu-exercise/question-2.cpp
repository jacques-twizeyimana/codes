#include<iostream>
using namespace std;

int numbers[10] = {1,2,3,4,5,6,7,8,9,0};

void print_arr(){
    int len = (sizeof(numbers) / sizeof(numbers[0]));
    for (int i = 0;i< len; i++){
       cout << numbers[i];
    }    
}

void rotate_arr(int position){
    int len = (sizeof(numbers) / sizeof(numbers[0]));
    int tmp[position];

    for (int i = 0; i < len-position; i++){
        if(i < position) tmp[i] = numbers[i];
        //shift elements
        numbers[i] = numbers[i+position];
    }
    //add tmp items to end
    for (int k = 0; k < position; k++){
       numbers[(len - position) +k] = tmp[k];
    }
    
}

int main(int argc, char const *argv[])
{
    int position;
    cout << "you want to rotate array at:\t";
    cin >> position;

    rotate_arr(position);

    print_arr();
    cout << endl;
    
    return 0;
}