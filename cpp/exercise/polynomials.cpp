#include<iostream>
#include<cmath>

using namespace std;

struct Node{
	int coefficient;
	int exponent;
	struct Node *next;
};

Node* create_elements(Node nodes[],int size){
    Node* start = new Node;
    start ->coefficient = nodes[0].coefficient;
    start ->exponent = nodes[0].exponent;
    start ->next = NULL;

    Node *prev = start;
    for (int i = 1; i < size; i++){
        Node* temp = new Node;
        temp->coefficient = nodes[i].coefficient;
        temp->exponent = nodes[i].exponent;
        temp->next = NULL;

        prev->next = temp;        
    }
    
    return start;
}

Node format_node(int cof, int exp){
    Node node;
    node.coefficient = cof;
    node.exponent = exp;
    node.next = NULL;

    return node;
}

double compute(Node* head,double x){
    double result = 0;

    while (head != NULL){
        double sol =  head->coefficient * pow(x,head->exponent);
        result +=sol;
        head = head->next;
    }

    return result;
}

Node* askUserDataAndCreate(){
    int coff,exp,times=1;
    cout << "\tEnter number of terms to create:\t";
    cin >> times;

    Node items[times];

   for (int i = 0; i < times; i++){
       cout<<"\n\tTERM "<<i+1<<" :"<<endl;
       cout << "\t\tEnter coefficient:\t";
       cin >>coff;
       
       cout << "\t\tEnter exponent:\t";
       cin >>exp;

       items[i] = format_node(coff,exp);
    }

    return create_elements(items,(sizeof(items) / sizeof(items[0])) );
}

double addTwoPolynomials(Node* firstHead ,Node* secondHead, double x){
    return compute(firstHead,x) +  compute(secondHead,x);
}

int main(int argc, char const *argv[]){
   int option;double x;
   Node *head,*head2 = NULL;
   
    cout<<"\t------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\tWELCOME"<<endl;
    cout<<"\t------------------------------------------------------------"<<endl<<endl;

   head = askUserDataAndCreate();

    chooseOption:
    cout<<endl<<"\t\t\tCHOOSE OPTION:"<<endl;   
    cout<<"\t------------------------------------------------------------"<<endl<<endl;

   cout<< "\t\t1.Compute F(x)"<<endl;
   cout<< "\t\t2.Create new F(x)"<<endl;
   cout<< "\t\t3.Add 2 polynomials"<<endl;
   cout<< "\t\t4.Exit"<<endl;

   cout<<endl<<"\t\tEnter option:\t";
   cin >> option;

   switch (option){
   case 1:
        cout << "\n\t\tEnter the value of X:\t";
        cin >>x;
        cout << "\n\t\tThe value of f(x) is: "<<compute(head,x)<<endl;
        break;
    case 2:
        head2 = askUserDataAndCreate();
        goto chooseOption;
        break;
    case 3:
        if(head2 == NULL){
            cout << "\n\n\t\tYOU ONLY HAVE ONE FUNCTION.\n\t\tChoose option 2 to create new function first.\n"<<endl;
            goto chooseOption;
        }
        else{
            cout << "\tEnter the value of X:\t";
            cin >>x;
            cout << "\tThe sum of 2 polynomials is :" << addTwoPolynomials(head,head2,x)<<endl;
        }
        break;
    case 4:
       exit(0);
    default:
       cout << "\t\tINVALID OPTION"<<endl;
       goto chooseOption;
       break;
   }

    return 0;
}

