#include<iostream>
#include "./common.cpp"
using namespace std;

void selection_sort(int arr[], int n){
    int min_index;
 
    for (int i = 0; i < n-1; i++){

        min_index = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_index])
                min_index = j;
        }
 
        // Swap
        swap(&arr[min_index], &arr[i]);
    }
}

int main(int argc, char const *argv[]){
   int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);
    
    return 0;
}
