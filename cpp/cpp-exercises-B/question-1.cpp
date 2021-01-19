#include<iostream>
using namespace std;

char grader(float mean_score){
    if ( mean_score > 100 || mean_score < 0)
    {
        cout << "You entered invalid marks"<<endl;
        exit(0);
    }
    char grade = mean_score >= 80 ? 'A' : mean_score >= 65 ? 'B' : mean_score >= 50 ?  'C':'F';

    return grade;
}

float calculator(float maths,float physics,float cs){
    float mean = (maths + physics + cs) /3;
    return mean;
}

void  printGrade(char grade,float average){
    cout << "The average marks is: "<<average<<endl;
    cout << "Your grade is: "<<grade<<endl;
}

int main(int argc, char const *argv[])
{
    float maths,computer_sc,physics;
    cout << "Enter your  Mathematics marks: \t";
    cin >> maths;
    cout << "Enter Computer science Marks: \t";
    cin >> computer_sc;
    cout << "Enter Marks obtained from Physics\t";
    cin >> physics;
    
    printGrade(grader(calculator(maths,physics,computer_sc)),calculator(maths,physics,computer_sc));

    return 0;
}
