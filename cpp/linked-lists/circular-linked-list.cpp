#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*head=NULL;
void createCLL(int A[],int size){
    struct Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;
    for(int i=1; i<size; i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void insert(int value){
    Node *t=new Node;
    if(!t)cout<<"normal flow of program"<<endl;
    t->data=value;
    Node *p =head;
    while(p->next!=head){
        p=p->next;
    }
    t->next=head;
    p->next=t;
    head=t;
}
void display(struct Node *hd){
    do{
        cout<<hd->data<<"\t";
        hd=hd->next;
    }
    while (hd!=head);
}
int main(){
    int A[]={1,2,34,5,8};
    createCLL(A,5);
    cout<<"display all"<<endl;
    display(head);
    cout<<"insertAtend"<<endl;
    insert(79);
    cout<<" display again";
    return 0;
}