#include<iostream>
#include<cstring>
#include "./store.cpp"
using namespace std;

int main(int argc, char const *argv[]){
    Tree tree;
    Software *software;
    string soft_name,vers;
   int option, n,quantity;
    while (1){
      cout<<"1.Register Software "<<endl;
      cout<<"2.Delete Software "<<endl;
      cout<<"3.Search Software"<<endl;
      cout<<"4.Sell software"<<endl;
      cout<<"5.Display all softwares"<<endl;
      cout<<"6.Quit"<<endl;
      cout<<"Enter your choice : ";
      cin>>option;
      switch(option){
         case 1:
            cout<<"Enter software name : ";
            cin >> software->name;
            cout<<"Enter version : ";
            cin >> software->version;
            cout<<"Enter price : ";
            cin >> software->price;

            tree.insert(root,software);
            break;
         case 2:
            cout<< "Enter software name to delete:";
            cin >> soft_name;
            tree.deleteSoftware(soft_name);
            break;
         case 3:
            Software *found;
            cout<<"Search:"<<endl;
            cin>>soft_name;
            tree.find(soft_name,NULL,&found);
            if(found == NULL) cout << "\n\nSuch software was not found\n\n";
            else{
               cout << "Result for: '" <<soft_name << "'"<<endl;
               cout<<found->name << " " << found->version<< " "<<found->quantity<<" "<<found->price<<endl;
            }
            break;
         case 4:
            cout<<"Enter software name to sell:"<<endl;
            cin>>soft_name;
            cout<<"Enter quantity:"<<endl;
            cin>>quantity;

            tree.sell(soft_name,quantity);

            cout<<endl;
            break;
         case 5:
            cout<<"List of softwares stored so far....:"<<endl;
            tree.show(root,1);
            cout<<endl;
            break;
         case 6:
            exit(1);
         default:
            cout<<"Wrong choice"<<endl;
      }
   }
    return 0;
}