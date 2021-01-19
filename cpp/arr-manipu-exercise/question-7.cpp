#include<iostream>
using namespace std;

int matrix[][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}
};

void print_matrix(){ 
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);

    //navigate through row 
    for (int i = 0; i < rows; i++){
        int k=0;
        //print starting elements in every row
        cout <<matrix[i][k]<<" ";
        //print all elements in this diagonal
        int diag_row = i;
        for (int d = 1 ; d <= i; d++){
            cout <<matrix[diag_row-1][d]<<" ";
            diag_row--;
        }
        
        //    if its last row,print all elements
    //    if (i == rows -1){
    //        for (int col = 1; col < columns; col++){
    //             cout <<matrix[i][col]<<" ";
    //        }
    //    }
       
       
       cout <<endl;
       
    }
    
}

int main(int argc, char const *argv[])
{
    print_matrix();
    return 0;
}
