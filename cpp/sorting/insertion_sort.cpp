#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    int k;
    for (int i = 1; i < n; i++){

        for (int k = i-1; k >= 0; k--){
            if (arr[k+1] > arr[k]){
                arr[k + 1] = arr[k];                
            }            
        }
        arr[k+1] = arr[i];
    }
}