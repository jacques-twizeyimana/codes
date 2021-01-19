#include<iostream>
using namespace std;

void print_diagonal(int matrix[][4],int rows,int columns){
    for (int i = 0; i < rows; i++){
        if( i== rows-1){
            int row_to_print_from = i;

            for (int k = 0; k <= i; k++){
                cout << matrix[row_to_print_from][k]<< " ";
                row_to_print_from--;
            }
            
        }
    }
    cout <<endl;
    
}

int main(int argc, char const *argv[]){

    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    print_diagonal(arr,4,4);
    
    return 0;
}
