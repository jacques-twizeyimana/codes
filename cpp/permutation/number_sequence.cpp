#include<iostream>
using namespace std;

int triangular_num_seq(int position){
    if(position <= 0) return 0;
    else if(position == 1) return 1;    
    return  position + triangular_num_seq(position -1);
}

int main(int argc, char const *argv[])
{
    for(int i=1; i<=6;i++){
        cout <<i << " triangle has " << triangular_num_seq(i) << " dots"<<endl;
    }
    return 0;
}
