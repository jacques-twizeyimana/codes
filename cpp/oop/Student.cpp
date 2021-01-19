#include<iostream>
using namespace std;

class Student{
    int age;
    int roll_number;
};

int main(int argc, char const *argv[])
{
    Student s1,s2; //static declaration
    Student *s3 = new Student(); //dynamic declaration
    return 0;
}
