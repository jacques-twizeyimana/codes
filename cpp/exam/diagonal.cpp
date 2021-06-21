#include<iostream>
using namespace std;

void print_diagonal(int matrix[][4],int rows,int cols){
    for (int i = 0; i < rows; i++) {
        if (i = rows-1){
            int rows_to_print_from = i;
            
            for (int k = 0; k <= i; k++){
                cout<<matrix[rows_to_print_from][k];
                rows_to_print_from--;
            }
            
        }        

    }
    
}

int main(int argc, char const *argv[])
{
    int matrix[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

print_diagonal(matrix,4,4);

    return 0;
}
