#include<iostream>
using namespace std;

struct Matrix{
    int row,col,value;
    Matrix* next;
};

Matrix* createElements(struct Matrix elements[], int number_of_elements) {
    Matrix *previousNode;
    Matrix *firstNode = (struct Matrix *) malloc(sizeof(struct Matrix));

    firstNode->row = elements[0].row;
    firstNode->col = elements[0].col;
    firstNode->value = elements[0].value;
    firstNode->next = NULL;

    previousNode = firstNode;

    Matrix *currentNode;
    for (int i = 1; i < number_of_elements; i++) {
        currentNode = (struct Matrix *) malloc(sizeof(struct Matrix));

        currentNode->row = elements[i].row;
        currentNode->col = elements[i].col;
        currentNode->value = elements[i].value;
        currentNode->next = NULL;

        previousNode->next = currentNode;
        previousNode = currentNode;
    }

    return firstNode;
}


Matrix* find_element(int col,int row,Matrix* ptr){
    while (ptr != NULL){
        ptr = ptr ->next;
        if (ptr ->col == col && ptr->row == row) return ptr;
    }
    
    return NULL;
}

void print_matrix(Matrix *head,int cols,int rows){
    while (head != NULL){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                Matrix* element = find_element(j,i,head);
                if (element) cout << element ->value << "\t";
                else cout << "0\t";
            }
            cout <<"\n";
        }
        
        head = head ->next;
    }
}

Matrix format_matrix(int col,int row,int val){
    Matrix node;
    node.col = col;
    node.row = row;
    node.value = val;

    return node;
}


void insertNode(Matrix node,Matrix *head){
    //move till the last node
    while (head != NULL){
        if(head ->next == NULL) break; 
        else head = head ->next;
    }   
    //create new Route 
    Matrix* newNode = new Matrix;
    newNode->row = node.row;
    newNode->col = node.col;
    newNode->value = node.value;
    newNode->next = NULL;

    //link last node to new Node
    head->next = newNode;
}


int main(int argc, char const *argv[]){
    int value,rows,cols,nonZeros=0;

    cout << "Enter rows you want to create:\t";
    cin >> rows;

    cout << "Enter columns you want:\t";
    cin >> cols;

    int capacity = rows * cols;

    Matrix matrixes[capacity];

    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            cout << "Enter value ["<<r+1<<","<<c+1<<"] or -1 to skip:\t";
            cin>>value;

            if (value != -1){
                Matrix matrix;
                matrix.col = c;
                matrix.row = r;
                matrix.value = value;

                matrixes[nonZeros] = matrix;
                nonZeros++;
            }

        }
    }
    Matrix* head = createElements(matrixes,nonZeros);
    print_matrix(head,cols,rows);

    return 0;
}
