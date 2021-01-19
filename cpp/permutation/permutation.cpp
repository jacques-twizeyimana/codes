#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void permutate(string txt){
    for (int i = 0; i < txt.length(); i++)
    {
       string stringArray = txt;
       for (int j = 0; j <= i; j++)
       {
           stringArray[i]  = txt[j];
           cout << stringArray<<endl;
       }
    }
    

    // sort(txt.begin(), txt.end());
    // do
    // {
    //    cout << txt<<endl;
    // }while (next_permutation(txt.begin(), txt.end()));
        
}

int main(int argc, char const *argv[])
{
    string text;
    cout << "Enter a string\t";
    cin >> text;

    permutate(text);

    return 0;
}
