#include<iostream>
using namespace std;

struct Route
{
    char* name;
    float price;
    char* agent;
    Route *next;
};

//function to add nodes

Route* create_node_elements(Route nodes[],int size){
    Route *head;
    head->name  = nodes[0].name;
    head->price = nodes[0].price;
    head->agent = nodes[0].agent;
    head->next = NULL;

    Route* previousNode = head;
    
    for (int i = 1; i < size; i++)
    {
        Route *newNode;
        newNode->name  = nodes[i].name;
        newNode->price = nodes[i].price;
        newNode->agent = nodes[i].agent;
        newNode->next = NULL;

        previousNode->next = newNode;
    }

    return head;
    
}

void display_routes(Route* head){
    while (head != NULL){
        cout << head->name <<" "<<head->price<<" "<<head->agent<< endl;
        head = head ->next;
    }
}

Route* search_routes(Route* head,float price){
    while (head != NULL){
        if(head->price == price) return head;
        head = head->next;
    }
    cout << "Price was not found"<<endl;
    return NULL;
}

float search_max(Route* head){
    float temp = head->price;
    while (head != NULL){
        if(temp < head -> price ) temp = head->price;
    }
    return temp;    
}

Route format_route(char* name, char* agent, float price){
    Route node;
        node.agent = agent;
        node.name = name;
        node.price = price;
    return node;
}

int main(){
    Route routes[] = {
        format_route((char*)"Gustave",(char*)"Gogos",3000),
        format_route((char*)"Jacques",(char*)"Musanze",5000),
        format_route((char*)"Mike K.",(char*)"Nyabihu",9000),
        format_route((char*)"Shallon Kobu.",(char*)"Nyamubuye",1500),
        format_route((char*)"Murengera F",(char*)"Karambizi",1800)
    };


    Route* head = create_node_elements(routes,5);
    display_routes(head);

    // float maxi = search_max(Route* head);
    // cout << "\n\nMax is: "<<maxi <<endl<<endl;
    
    return 0;
}