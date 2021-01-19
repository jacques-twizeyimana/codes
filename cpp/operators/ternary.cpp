#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int marks;
  std::string grade,performanceStatus;

  std::cout << "Enter your marks" << '\n';
  std::cin >> marks;

  grade = marks >= 16 ? "A":marks >= 14 ? "B":marks >=10 ? "C":marks <5 ? "U":"D";

  std::cout << "Your grade is: " << grade<< '\n';

  performanceStatus = marks>10 ? "Passed":"Failed";

  std::cout << "Your perfomance status is: "<<performanceStatus << '\n';

  return 0;
}
