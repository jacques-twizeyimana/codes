#include<iostream>

using namespace std;

struct Route{
    char* name;
    float price;
    char* agent;
    Route *nextRoute;
};

Route* createElements(struct Route elements[], int number_of_elements) {
    Route *previousNode;
    Route *firstNode = (struct Route *) malloc(sizeof(struct Route));

    firstNode->name = elements[0].name;
    firstNode->price = elements[0].price;
    firstNode->agent = elements[0].agent;
    firstNode->nextRoute = NULL;

    previousNode = firstNode;

    Route *currentNode;
    for (int i = 1; i < number_of_elements; i++) {
        currentNode = (struct Route *) malloc(sizeof(struct Route));

        currentNode->name = elements[i].name;
        currentNode->price = elements[i].price;
        currentNode->agent = elements[i].agent;
        currentNode->nextRoute = NULL;

        previousNode->nextRoute = currentNode;
        previousNode = currentNode;
    }

    return firstNode;
}

void displayElements(Route* head){
cout <<"Station name\t\tRoute price\t\tStation agent\n\n";

    while (head != NULL){
        cout << head->name << "\t\t\t\t" << head->price;
        cout<< "\t\t\t" << head->agent<<endl;
        head = head->nextRoute;
    }
}

Route format_route(char* name,float price,char* agent){
    Route route;
    route.agent = agent;
    route.name = name;
    route.price = price;

    return route;
}

Route* searchInElements(Route* head,float price){
     while (head != NULL){
         if(head ->price == price) return head;
         head = head->nextRoute;
     }
     return NULL;
}

float findMaxPrice(Route* head){
    float max = head -> price;
    head = head->nextRoute;//move to next route
    
    while (head != NULL){
        if(max < head -> price) max = head->price; //compare this price with max
        head = head->nextRoute;//move to next node
    }
    return max;
}

int countNodes(Route* head){
    int count = 0;
     while (head != NULL){
         count++;
        head = head->nextRoute;
    }
    return count;
}

Route* insertAtBeginning(Route node,Route* head){
    Route* t = new Route;
    t->agent = node.agent;
    t->name = node.name;
    t->price = node.price;

    t->nextRoute = head;
  
    return t;
}

void insertAtEnd(Route node,Route *head){
    //move till the last node
    while (head != NULL){
        if(head ->nextRoute == NULL) {
           break; 
        }
        else{
            head = head ->nextRoute;
        }
    }   
    //create new Route 
    Route* newRoute = new Route;
    newRoute->name = node.name;
    newRoute->agent = node.agent;
    newRoute->price = node.price;
    newRoute->nextRoute = NULL;

    //link last node to new Node
    head->nextRoute = newRoute;
}

Route* deleteBeginning(Route* first){
    Route* next = first ->nextRoute;
    delete first;

    return next;
}

void delete_a_node(Route *first,float price){
    Route* previous = first;

    while (first != NULL){
        if(price == first->price){
            previous->nextRoute = first->nextRoute;
            delete first;
            break;
        }
        
        previous = first;
        first = first->nextRoute;
    }
    
}

void insert_after_a_node(Route* head,Route newNode,float price){

    while (head != NULL){
        if(head->price == price) {
            Route* newRoute = new Route;
            newRoute->name = newNode.name;
            newRoute->agent = newNode.agent;
            newRoute->price = newNode.price;

            newRoute->nextRoute = head->nextRoute;
            head->nextRoute = newRoute;

            break;
        } 

        head = head->nextRoute;
    } 
}

Route* concatenateNodes(Route* head1,Route* head2){
    while (head1 != NULL){
        if(head1->nextRoute == NULL) {
            head1->nextRoute = head2;
            break;
        }
        head1 = head1->nextRoute;
    }
        
}

int main() {

    cout << "\n\n_____________________________________________________________________________________________\n\n";
    
    Route huye_kigali_routes[] = {
        format_route((char*)"Huye G",300,(char*)"Kayihura Karake"),
        format_route((char*)"Nyanza",2100,(char*)"Isibo Gustave"),
        format_route((char*)"Ruhango",1700,(char*)"Kagabo P"),
        format_route((char*)"Muhanga",1200,(char*)"I.Bellamie"),        
        format_route((char*)"Kamonyi",800,(char*)"Mutangana"),       
        format_route((char*)"Kigali",100,(char*)"Mulindabigwi")
        
    };
    Route* huye_kigali = createElements(huye_kigali_routes,(sizeof(huye_kigali_routes) / sizeof(huye_kigali_routes[0])) );    
    displayElements(huye_kigali);
    
    Route kigali_rubavu_routes[] = {
        format_route((char*)"Rulindo",300,(char*)"Bavakure"),
        format_route((char*)"Gakenke",1200,(char*)"Buregeya"),
        format_route((char*)"Musanze",1900,(char*)"Sauve jean"),
        format_route((char*)"Byangabo",2400,(char*)"Nikobimeze"),        
        format_route((char*)"Mukamira",2800,(char*)"Pascal"),       
        format_route((char*)"Rubavu",3500,(char*)"Platini P")
        
    };

    cout << "\n\n_____________________________________________________________________________________________\n\n";

    Route* kigali_rubavu = createElements(kigali_rubavu_routes, (sizeof(kigali_rubavu_routes) / sizeof(kigali_rubavu_routes[0])) );
    displayElements(kigali_rubavu);
    
    cout << "\n\n_____________________________________________________________________________________________\n\n";
    cout<<"\t\tAFTER CONCATENATING ROUTES\n\n";

    concatenateNodes(huye_kigali,kigali_rubavu);
    displayElements(huye_kigali);

    // Route* result = searchInElements(head,3050);
    
    // cout<< "\n\n\t\tSearching.....\n\n";
    // if(result != NULL){
    //     cout << "Stop name : " << result -> name<<endl;
    //     cout << "Stop price : "<<result ->price<<endl;
    // }
    // else{
    //     cout << "un successful search. There is no product with price of 3050 found"<<endl;
    // }
    
    // cout<< "\n\n\t\tFinding max price.....\n\n";
    // cout << "Maximum price is: " << findMaxPrice(head)<<endl;
    
    // cout<< "\n\n\t\tCounting nodes....\n\n";
    // cout << "This list has "<<countNodes(head)<<" nodes"<<endl;

    
    // head = insertAtBeginning( format_route((char*)"Kigali",5050,(char*)"Horizon A."),head);
    // cout << "\n\nAfter inserting at the beginning\n\n";
    // displayElements(head);

    // insertAtEnd(format_route((char*)"Akanyaru",7050,(char*)"Mukandemezo"),head);
    // cout << "\n\nAfter inserting at end\n\n";
    // displayElements(head);

    // cout << "\n\ndelete the beginning of list\n\n";
    // head = deleteBeginning(head);
    // displayElements(head);

    // cout << "\n\n-----------------insert after Karongi--------------------------\n\n";
    // insert_after_a_node(head, format_route((char*)"Ruhango",2000,(char*)"Edisor kamonyi"),3050);
    // displayElements(head);

    
    // cout << "\n\n----------------- delete any node----------------\n\n";
    // delete_a_node(head,1900);
    // displayElements(head);

    
    return 0;
}