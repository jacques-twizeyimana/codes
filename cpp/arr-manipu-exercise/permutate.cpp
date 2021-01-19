#include<iostream>

using namespace std;

void print_arr(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main(int argc, char
    const * argv[]) {
    char arr[] = {'A','B','C'}, temp;
    int length = 3;
    char arr_copy[3];
    //loop through array
    for (size_t i = 0; i < length; i++) {

        //assign array
        for (int j = 0; j < length; j++) {
            arr_copy[j] = arr[j];
        }
        //make current element the first
        temp = arr_copy[0];
        arr_copy[0] = arr_copy[i];
        arr_copy[i] = temp;
        
        //swap and print array
        for (int k = 1; k < length-1; k++) {
            print_arr(arr_copy, length);

            //swap 
            temp = arr_copy[k];
            arr_copy[k] = arr_copy[k+1];
            arr_copy[k+1] = temp;
        }


        //create fixed arrays
        // for (int y = 0; y < length; y++) {
        //   print_arr(arr_copy,3);
        // }

    }

    return 0;
}
