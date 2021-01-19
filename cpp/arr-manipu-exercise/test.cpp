#include <iostream>
using namespace std;
int main()
{
 int n[25];
 n[0] = 100;
 n[24] = 200;
 cout << *n << "\t"<< *(n + 24) + *(n + 0) << "\n" << endl;
 return 0;
}