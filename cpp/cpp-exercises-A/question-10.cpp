#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
   time_t t = time(0);
   tm* localtm = localtime(&t);

    cout << "The date (MM-DD-YY) of today is "<< (localtm->tm_mon + 1) <<"/"<< localtm->tm_mday<<"/"<<(localtm->tm_year + 1900)<<endl;
    cout << "The local time is: "<<localtm->tm_hour<<":"<< localtm->tm_min <<":"<< localtm->tm_sec<<endl;
    return 0;
}
