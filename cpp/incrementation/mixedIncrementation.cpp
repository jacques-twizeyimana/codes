#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n=5,i,j;

  for (int i=0;i<n;i++) {
    std::cout << "Iteration :" << i+1 << '\n';
    for (int j = i; j > 0; j--) {
      std::cout << "\ti= " << i <<" and j= "<< j << '\n';
    }
    std::cout << "______________________________________|" << '\n';
  }
  return 0;
}
