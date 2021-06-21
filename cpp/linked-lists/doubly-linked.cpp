#include<iostream>
using namespace std;

struct Node
{ 
    struct Node *prev;
    int data;
    struct Node *next;
}*head=NULL;

void createElements(int A[],int n){
    head=new Node;
    head->data=A[0];
    head->prev=head->next=NULL;
    Node *t,*last;
    int i;
    last=head;
    for(i=1; i<n; i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void display(Node* p){
    while (p){
      cout << "\t" << p->data;
      p = p->next;
    }
}

void insert_at_head(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->prev = NULL;
    temp->next = head;
    head->prev =temp;

    head = temp;
}

void insert_at_end(Node* p,int data){
    while (p->next){
        p = p->next;
    }
    
    Node* t = new Node;
    t->data = data;
    t->next = NULL;
    p->next = t;
}

void insert_after_node(int values,int givenData){
    Node* p = head;
    while (p->data != givenData && p){
        p = p->next;
    }
    Node* t = new Node;
    t->data = values;
    t->next = p->next;
    t->prev = p;

    p->next->prev = t;
    p->next = t;
}

void insert_before_node(int value,int givenValue){
    Node* p = head;
    while (p->data != givenValue && p){
        p = p->next;   
    }
    Node* temp = new Node;
    temp->data = givenValue;

    temp->next = p;
    temp->prev = p->prev;
    
    p->prev->next = temp;
    p->prev = temp;
}

int main(int argc, char const *argv[])
{
    int data[] = {1,2,3,4,5};
    createElements(data,(sizeof(data) / sizeof(data[0])));
    cout << "\t\tINITIAL DATA\t\t\n"<<endl;
    display(head);

    
    cout << "\n\n\t\tINSERT AT HEAD\t\t\n"<<endl;
    insert_at_head(9);
    display(head);

    cout << "\n\n\t\tINSERT AT END\t\t\n"<<endl;
    insert_at_end(head,45);
    display(head);

    cout << "\n\n\t\tINSERT AFTER A NODE \t\t\n"<<endl;
    insert_after_node(100,3);
    display(head);

    cout << "\n\n\t\tINSERT BEFORE A NODE\t\t\n"<<endl;
    insert_before_node(45,7);
    display(head);
    return 0;
}
