#include<iostream>

using namespace std;

struct Route{
    int data;
    Route *nextRoute;
};

Route* createElements(int A[], int n) {
    Route *previousNode;
    Route *first = (struct Route *) malloc(sizeof(struct Route));

    first->data = A[0];
    first->nextRoute = NULL;

    previousNode = first;

    struct Route *tempNode;
    for (int i = 1; i < n; i++) {
        tempNode = (struct Route *) malloc(sizeof(struct Route));
        tempNode->data = A[i];
        tempNode->nextRoute = NULL;
        previousNode->nextRoute = tempNode;
        previousNode = tempNode;
    }

    return first;
}

void displayElements(Route* head){

    while (head != NULL){
        cout << head->data<<endl;
        head = head->nextRoute;
    }
}

int main() {
    int elements[5] = {1,2,3,4,5};
    Route* head = createElements(elements, 5);

    displayElements(head);
    return 0;
}

