#include<iostream>
#include<fstream>
// #include "./file_manip.cpp"
using namespace std;

struct Software
{
    string name;
    string version;
    int quantity;
    float price;  
    Software *l;
    Software *r;  
}*root;

class Tree{
   public://functions declaration
   // void search(Software *, string);
   void find(string, Software **, Software **);
   void insert(Software *, Software *);
   void deleteSoftware(string);
   void casea(Software *,Software *);
   void caseb(Software *,Software *);
   void casec(Software *,Software *);
   void preorder(Software *);
   void inorder(Software *);
   void postorder(Software *);
   void sell(string,int);
   void show(Software *, int);
   Tree(){
      root = NULL;
   }
};

bool saveInFile(Software *soft){  
  ofstream myfile;
  try{
    myfile.open ("jacques_software_store.txt");
    myfile << soft->name<<" "<<soft->version<<" "<<soft->quantity<< " "<<soft->version <<"\n";
    return true;
  }
  catch(const std::exception& e){
      std::cerr << e.what() << '\n';
      return false;
  }

}

void Tree::insert(Software *tree, Software *newSoftwaree){
   if (root == NULL){
      root = new Software;
      root->name = newSoftwaree->name;
      root->version = newSoftwaree->version;
      root->quantity = newSoftwaree->quantity;
      root->l= NULL;
      root->r= NULL;
      cout<<"Root Softwaree is Added"<<endl;
      return;
   }
   if (tree->name+tree->version == newSoftwaree->name + newSoftwaree->version){
       tree->quantity = newSoftwaree->quantity + newSoftwaree->quantity;
       return;
   }

   if (tree->name+tree->version > newSoftwaree->name+newSoftwaree->version){
      if (tree->l != NULL)insert(tree->l, newSoftwaree);
      else{
         tree->l= newSoftwaree;
         (tree->l)->l = NULL;
         (tree->l)->r= NULL;
         cout<<"Softwaree Added To Left"<<endl;
         return;
      }
   }
   else{
      if (tree->r != NULL) insert(tree->r, newSoftwaree);
      else{
         tree->r = newSoftwaree;
         (tree->r)->l= NULL;
         (tree->r)->r = NULL;
         cout<<"Softwaree Added To Right"<<endl;
         return;
      }
   }
   saveInFile(newSoftwaree);
}


void Tree::find(string i, Software **parent, Software **loc)//find the position of the item
{
   Software *ptr, *ptrsave;
   if (root == NULL){
      *loc = NULL;
      *parent = NULL;
      return;
   }
   if (i == root->name){
      *loc = root;
      *parent = NULL;
      return;
   }
   if (i < root->name)
    ptr = root->l;
   else
    ptr = root->r;

   ptrsave = root;
   while (ptr != NULL)
   {
      if (i == ptr->name)
      {
         *loc = ptr;
         *parent = ptrsave;
         return;
      }
      ptrsave = ptr;
      if (i < ptr->name)
      ptr = ptr->l;
      else
      ptr = ptr->r;
   }
   *loc = NULL;
   *parent = ptrsave;
}

void Tree::deleteSoftware(string i){
   Software *par, *location;
   if (root == NULL){
      cout<<"Tree is empty"<<endl;
      return;
   }
   Tree::find(i, &par, &location);
   if (location == NULL)
   {
      cout<<"Item not present in tree"<<endl;
      return;
   }
   if (location->l == NULL && location->r == NULL)
   {
      Tree::casea(par, location);
      cout<<"item deleted"<<endl;
   }
   if (location->l!= NULL && location->r == NULL)
   {
      Tree::caseb(par, location);
      cout<<"item deleted"<<endl;
   }
   if (location->l== NULL && location->r != NULL)
   {
      Tree::caseb(par, location);
      cout<<"item deleted"<<endl;
   }
   if (location->l != NULL && location->r != NULL)
   {
      Tree::casec(par, location);
      cout<<"item deleted"<<endl;
   }
   free(location);
}


void Tree::casea(Software *par, Software *loc ){
    if (par == NULL) root= NULL;
    else{
        if (loc == par->l) par->l = NULL;
        else
        par->r = NULL;
    }
}
void Tree::caseb(Software *par, Software *loc){
   Software *child;
   if (loc->l!= NULL)
      child = loc->l;
   else
      child = loc->r;
   if (par == NULL)
   {
      root = child;
   }
   else
   {
      if (loc == par->l)
         par->l = child;
      else
         par->r = child;
   }
}
void Tree::casec(Software *par, Software *loc)
{
   Software *ptr, *ptrsave, *suc, *parsuc;
   ptrsave = loc;
   ptr = loc->r;
   while (ptr->l!= NULL)
   {
      ptrsave = ptr;
      ptr = ptr->l;
   }
   suc = ptr;
   parsuc = ptrsave;
   if (suc->l == NULL && suc->r == NULL)
      casea(parsuc, suc);
   else
      caseb(parsuc, suc);
   if (par == NULL)
   {
      root = suc;
   }
   else
   {
      if (loc == par->l)
         par->l = suc;
      else
         par->r= suc;
   }
   suc->l = loc->l;
   suc->r= loc->r;
}

void Tree::show(Software *ptr, int level){
   int i;
   if (ptr != NULL){
      show(ptr->r, level+1);
      cout<<endl;
      if (ptr == root)
         cout<<"Root : ";
      else{
         for (i = 0;i < level;i++)
         cout<<"\n";
      }
      cout <<ptr->name <<"\t" <<ptr->name << "\t" <<ptr->version <<"\t" <<ptr->quantity <<"\t" << ptr->price;
      show(ptr->l, level+1);
   }
}

void Tree::sell(string name,int quantity){
   Software *par, *location;
   if (root == NULL){
      cout<<"Tree is empty"<<endl;
      return;
   }
   Tree::find(name, &par, &location);
   if (location == NULL)
   {
      cout<<"Item not present in tree"<<endl;
      return;
   }

    location->quantity = location->quantity - quantity;
   
}
