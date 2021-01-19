#include<iostream>
#include<cmath>

using namespace std;

template <class G>
void insert(G array[],int position,G value){
    int len = (sizeof(array)/4);
    for (int i = len; i > postion; i--)
    {
        array[i] = array[i-1];
    }

    array[position] = value;    
}

template <class K>
void delete_item(K array[],int position){
    int len = (sizeof(array)/4);
    for (int i = position; i < len ; i++)
    {
        array[i] = array[i-1];
    }
    array[len] = NULL;
}

template <class T>
void replace(T array[],int position,T value){
    array[position] = value;
}

int main(){
    int scores[10];
    int nums[10]={1,2};

    for (int i = 0; i < 10; i++)
    {
        cout <<"scores at index " << i <<" : "<< scores[1]<<endl;
    }
    cout <<"__________________________________________________"<<endl;
    for (int z = 0; z < (sizeof(nums)/4); z++)
    {
        cout << "number at index "<<z<< " : "<<nums[z]<<endl;
    }

    return 0;
}