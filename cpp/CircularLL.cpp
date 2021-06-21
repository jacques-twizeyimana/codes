#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	
	int data;
	struct Node *next;
}*head=NULL;

void createCLL(int A[], int size){
	
	struct Node *t, *last;
	//head=new Node;
	head=(struct Node*)malloc(sizeof(struct Node));
	head->data=A[0];
	head->next=head;
	last=head;
	
	int i;
	for(i=1; i<size; i++ ){
		
		t=new Node;
		t->data = A[i];
		t->next = last->next;
		last->next=t;
		last=t;
		
	}
	
	
}

void display(struct Node *hd){
	
	do{
		cout<<hd->data<<"\t";
		hd = hd->next;
	}while(hd!=head);
	
}


int main(){
	
	int A[]={19, 45, 68, 90, 400};
	createCLL(A, 5);
	cout<<"ALL DATA: \n"<<endl;
	display(head);
	
	return 0;
}
