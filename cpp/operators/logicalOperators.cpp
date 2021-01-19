#include <iostream>
using namespace std;
int main(){
  int x =42, y=7, z=24;
  cout<<""<< ((x<=35) && (z==24))<<endl;
  cout<<"" << ((x==35) ||(y<10))<<endl;
  cout<<""<< ((x>y) && (y<z))<<endl;
  cout <<""<< (z>y && !(x<z) || y<=x) <<endl;
  std::cout << "___________________________________________________" << endl;
  std::cout << "" << ( 25 < 7 || 15 > 36) << '\n';
  std::cout << "" << (15 > 36 || 3 < 7) << '\n';
  std::cout << "" << (14 > 7 && 5 <= 5) <<'\n';
  std::cout << "" << (4 > 3 && 17 <= 7) <<'\n';
  std::cout << "" << (! false) <<'\n';
  std::cout << "" << (! (13 != 7)) <<'\n';
  std::cout << "" << (9 != 7 && !0) <<'\n';
  // std::cout << "" << (5 > && 7) <<'\n';

return 0;
}
