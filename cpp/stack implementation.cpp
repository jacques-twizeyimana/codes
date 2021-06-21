#include<iostream>
using namespace std;

struct StackNode{
    int dataInfo;
    struct StackNode *next;
}*TOP;

void push(int val){
    struct StackNode* newNode = (struct StackNode *) malloc (sizeof(struct StackNode));
    if(TOP == NULL){
        newNode->dataInfo = val;
        newNode->next = NULL;
        TOP = newNode;
    }

    else{
        newNode->dataInfo = val;
        newNode->next = TOP;
        TOP = newNode;
    }
}

void display(){
    struct StackNode *temp;
    temp = TOP;
    while(temp != NULL){
        cout<<"Data found: "<<temp->dataInfo<<endl;
        temp = temp->next;
    }
}

int main(){
    push(12);
    push(13);
    push(14);
    display();
    return 0;
}
