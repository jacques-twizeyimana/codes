#include<iostream>
using namespace std;

 struct QueueNode{
    int data;
    struct QueueNode* next;
};

struct QueueNode* FRONT = NULL;
struct QueueNode* REAR = NULL;

void insert_new_node(int value){
   int val;
   cout<<"Insert the element in queue : "<<endl;
   cin>>val;
   struct QueueNode* temp;
   if (REAR == NULL) {
      REAR = (struct QueueNode *)malloc(sizeof(struct QueueNode));
      REAR->next = NULL;
      REAR->data = val;
      FRONT = REAR;
   } else {
      temp=(struct QueueNode *)malloc(sizeof(struct QueueNode));
      REAR->next = temp;
      temp->data = val;
      temp->next = NULL;
      REAR = temp;
   }
}

void delete_from_front(){
    struct QueueNode* temp;
    temp = FRONT;
    if(FRONT == NULL && REAR == NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    else{
        FRONT = FRONT->next;
        delete(temp);
    }
}

void display(){
    struct QueueNode* temp;
    temp = FRONT;

   if ((FRONT == NULL) && (REAR == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}

int main(){
    insert_new_node(12);
    insert_new_node(13);
    insert_new_node(14);
    insert_new_node(15);

    delete_from_front();
    display();

    return 0;
}
