#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;
 
const int STACK_SIZE = 70;

struct Stack {
    int top = -1;
    char array[STACK_SIZE];
} st;
 
int is_full() {   
    if(st.top >= STACK_SIZE-1) return true;
    else return false;
}
 
int is__empty() {
 if(st.top == -1) return true;
 else return false;
}

void push(char c) {
    if (is_full()) cout << "Overflow error.Stack is Full.\n";
    else {
        st.array[st.top + 1] = c;
        st.top++;
    }
}
 
int pop() {
    if (is__empty()) cout << "underflow error.Stack is already empty.\n";
    else {
        st.top = st.top - 1;
        return st.array[st.top+1];
    }
}

bool check_palindrome(string phrase){
    for(int i = 0; i < phrase.length(); i++){
        if(pop() != phrase[i]) return false;
    }

    return true;
}

 
int main() {
    string text;
    cout << "Enter a string to check if it is palindrome:\t";
    getline(cin,text);

    for(int i = 0; i < text.length(); i++){
        push(text[i]);
    }

    if(check_palindrome(text)) cout << text << " is palindrome text"<<endl;     
    else cout << text << " is not a palindrome text"<<endl;
 
    return 0;
}