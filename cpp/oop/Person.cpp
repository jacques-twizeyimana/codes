#include<iostream>
using namespace std;

class Person{
    private:
        int age;
        string name;

    public:
        Person(){}
        Person(string name,int age){
            this -> age = age;
            this -> name = name;
        }
        void setAge(int age){
            this -> age =age;
        }
        int getAge(){
            return this -> age;
        }

        void setName(string name){
            this ->name = name;
        }
        string getName(){
            return this -> name;
        }
};

int main(int argc, char const *argv[])
{
    Person lekid = Person("Dukundane",15);
    Person p2 = Person();

    cout << "My name is "<<lekid.getName() << " and am " << lekid.getAge()<< " Years old"<<endl;

    cout << "My name is "<<p2.getName() << " and am " << p2.getAge()<< " Years old"<<endl;
    p2.setAge(3);
    p2.setName("default constructor");
    return 0;
}

