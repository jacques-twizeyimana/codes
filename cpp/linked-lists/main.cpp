#include <iostream>
#include <cstring>

using namespace std;
class Person{
    private:
        char *name;
        int age;
        float height;
        Person *next;

    public:
        Person(){
            this->next = NULL;
        };

        Person(char *name,int age,float height){
            this->name = name;
            this->age = age;
            this->height = height;
            this->next = NULL;
        }

        //setters and getters
        void setNext(Person *nextNode){
            this->next = nextNode;
        }

        Person *getNext(){
            return this->next;
        }
        int getAge(){
            return age;
        }
        char* getName(){
            return name;
        }
};

int main() {
    std::cout << "Learning linked lists in c++" << std::endl;

    Person* head = NULL;

    Person p1 = Person("Jacques", 20, 1.7);
    Person p2 = Person("Danny",18,1.8);
    Person p3 = Person("Danger",38,1.0);
    Person p4 = Person("Divine",10,1.8);

    p1.setNext(&p2);
    p2.setNext(&p3);
    p3.setNext(&p4);

    head= &p1;

    if(head != 0 || head != NULL || !head){
        Person* nextNode = head;

        while (nextNode != NULL){
            Person currentNode = *nextNode;
            char *d = currentNode.getName();
            cout << currentNode.getName() << endl;

            nextNode = currentNode.getNext();
        }
    }

    return 0;
}
