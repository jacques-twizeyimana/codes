#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
struct Node{
    int coeff;
    int exponent;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *create_polly(struct Node *start){
    struct Node *new_node,*ptr;
    int n,c;
    cout<<"\n Enter -1 to stop the creation of a Node ";
    cout<<"\n Enter the coefficient: ";
    cin>>n;
    cout<<"\n Enter the exponent: ";
    cin>>c;
    while(n!=-1){
        if(start==NULL){
            new_node = new Node;
            new_node->coeff=n;
            new_node->exponent=c;
            new_node->next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            new_node = new Node;
            new_node->coeff=n;
            new_node->exponent=c;
            new_node->next=NULL;
            ptr->next=new_node;

        }

        cout<<"\n Enter the coefficient: ";
        cin>>n;

        if(n==-1){
            break;
        }
        cout<<"\n Enter the exponent: ";
        cin>>c;

    }
    return start;
}
struct Node *display_poly(struct Node *start){
    struct Node *ptr;
    ptr = start;
    while(ptr!=NULL){
        cout<<"("<<ptr->coeff<<"x"<<"^"<<ptr->exponent<<")"<<" + ";
        ptr=ptr->next;
    }
    return start;
}
int evaluatePolynomial(struct Node *hd, int value){
    int result = 0;
    do{
        int exponent = hd->exponent ? hd->exponent : 0;
        result += hd->coeff * pow(value, exponent);
        hd=hd->next;
    }while(hd);
    return result;
}
int main(){
    int choice;
    int xValue;
    do{
        cout<<"\n Enter 0 to Exit";
        cout<<"\n 1. Create a polynomial";
        cout<<"\n 2. Display a polynomial";
        cout<<"\n\n\t Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 0:
                cout<<"\n Byeee";
                exit(0);
            case 1:
                start = create_polly(start);
                break;

            case 2:
                start = display_poly(start);
                break;

            default:
                cout<<"\n Wrong Input";

        }
        cout<<"\n Evaluate a polynomial";
        cout<<"\n Enter the value of x:  ";
        cin>>xValue;
        int result = evaluatePolynomial(start,xValue);
        cout<<"The value of polynomial is : "<<result<<endl;

    }while(choice!=0);

    return 0;
}