#include<iostream>
using namespace std;

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9};

void reverse_arr(){
    int len = (sizeof(arr) / sizeof(arr[0]));
    int temp;

    //reverse

    for (int i = 0 ; i < len/2; i++){
        temp  = arr[i];
        arr[i] = arr[(len - 1)- i];
        arr[(len - 1)- i] = temp;   
    }    
}

void print_arr(){
    int len = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < len; i++){
       cout << arr[i];
    }    
}

int main(int argc, char const *argv[])
{
    cout << "Array before reversing"<<endl;
    print_arr();
    
    reverse_arr();

    cout<<endl<<"Array after reversing"<<endl;
    print_arr();

    cout <<endl;
    return 0;
}
