#include<iostream>
using namespace std;

int maximum_size = 5;
int queueArray[5];
int FRONT = -1;
int REAR = -1;

void insert_new_element(int value){
    if(REAR == -1 && FRONT == -1){
        FRONT = 0;
        REAR = 0;
    }
    else{
        REAR = REAR + 1;
    }

    queueArray[REAR] = value;
}

void delete_first_element(){
    if(FRONT == -1){
        cout<<"Queue is still empty"<<endl;
        return;
    }

    delete(queueArray[FRONT]);
    FRONT = FRONT+1;
}

void display(){
    cout<<"Data in the queue : "<<endl;
    for(int i=0;i<=REAR;i++){
        cout<<"data :"<<i<<" is : "<<queueArray[i]<<endl;
    }
}

int main(){
    insert_new_element(12);
    insert_new_element(14);
    insert_new_element(17);

    display();
    return 0;
}
