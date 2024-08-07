#include<iostream>
#include<string>
using namespace std;
class books
{
public:
  int size,i,cost[10];
  string name[10];
  void Accept()
  {
  cout<<"_Enter Books size_: ";
   cin>>size;
   cout<<"_Enter Books Name_ : ";
   cin>>name[i];
   cout<<"_Enter books cost_: ";
   cin>>cost[i];
  
  }
  void display()
  {
   
  }
};
int main()
{
string name[10];
int i,size,cost[10];
books b1;
 
 for(i=0;i<size;i++)
   {
     b1.Accept();
   }

cout<<"\t\t ______****** BOOKS LIST ******______\n";
cout<<"\t\t\t_NAMES_\t\t_COST_\n";
  
for(i=0;i<size;i++)
{
   cout<<"\t\t\t"<<name[i]<<"\t\t"<<cost[i]<<"\n";
}

return 0;
}
