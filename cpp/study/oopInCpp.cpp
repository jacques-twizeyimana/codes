#include <iostream>

using namespace std;

class tryOppInCPP{
    private:
     string name;
     int age;

    public: tryOppInCPP(string nam, int ag){
        name = nam;
        age = ag;
    }

    public: void introduce(){
        cout << "my name is "<<name <<" and I am "<< age <<" years old"<<endl;
    }

    public: double sum(double num1, double num2){
        return num1+ num2;
    }
};

int main(int argc, char const *argv[])
{
    cout << "hello world"<<endl;
    tryOppInCPP letstry = tryOppInCPP("Sandberg",12);

    letstry.introduce();
    cout << letstry.sum(12.0,23.9)<<endl;
    return 0;
}


