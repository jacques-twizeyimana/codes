#include <iostream>
using namespace std;
struct Stack{
    int size ;
    int top;
    float *S;
};
void create (struct Stack *st,int size){
    st->size=size;
    st->top=-1;
    st->S=new(float *st);
}
void push(struct Stack *st,float x){
    if(st->top==st->size-1) cout<<"the stacx is full"<<endl;
    st->top=st->top+1;
    st->S[st->top]=x;
}
void pop(){
if(st->top==-1){ cout<<"the stacx is empty"<<endl;}
   x=st->S[st->top];
    st->S[st->top]=0;
       st->top=st->top-1;
    return x;
}
void dispplay(struct Stack *st){
    for (int i=st->top; i>=0; i--) cout <<st->S[i]<<"yes";
}
int main(){
    struct Stack st;
    create(&st,10);
    push(&st,25);
     push(&st,38.2);
      push(&st,9.1);
       push(&st,8.7);
        push(&st,50);
        cout <<"All values in the stack"<<endl;
        display(&st);
        cout<<" values after pop"<<pop(&st);
 display(&st);
 return 0;
}