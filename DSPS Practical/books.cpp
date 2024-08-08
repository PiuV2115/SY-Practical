#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
  int cost;
  string name;
  void Accept()
  {
   cout<<"_Enter Books Name_ : ";
   cin>>name;
   cout<<"_Enter books cost_: ";
   cin>>cost;
   }
   
  
   
   
};
int main()
{
Book books[10];
int i,size,choice;
cout<<"_Enter Books size_: ";
cin>>size;
do{
cout<<"1.Fill Books Details\n";
cout<<"2.Sorting Books (By Cost)\n";
cout<<"3.Books More than 500\n";
cout<<"4.count of Books Less Than 500\n";
//cout<<"5.Deleteion Duplication (temporary array)\n";
//cout<<"6.Deletion of Duplication (orignal array)\n"; 
//cout<<"7.Display\n";
cout<<"5.Exit\n"
cout<<"Enter Your Choice : ";
cin>>choice;
cout<<"\n\n";
switch(choice)
{
case 1:
cout<<"Enter Book Details";
for(i=0;i<size;i++)
{ 
     books[i].Accept();
}
cout<<"\t************************************************************\n";
cout<<"\t________________________ BOOKS LIST________________________\n\n";
cout<<"\t************************************************************\n";
cout<<"\t\t\t_NAMES_\t\t_COST_\n";
for(i=0;i<size;i++)
{
cout<<"\t"<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
}
cout<<"\t************************************************************\n";
break;


case 2:
for(i=1;i<size;i++)
{
for(int j=0;j<i;j++)
{
if(books[i].cost>books[j].cost)
{
int temp=books[i].cost;
string temp1=books[i].name;
books[i].cost=books[j].cost;
books[i].name=books[j].name;                      
books[j].cost=temp;
books[j].name=temp1;
}
}
}
cout<<"\n\t************************************************************\n";
cout<<"\t _____________________SORTED BOOKS LIST_____________________\n\n";
cout<<"\t************************************************************\n";
cout<<"\t\t\t_NAMES_\t\t_COST_\n";
for(i=0;i<size;i++)
{
cout<<"\t\t\t"<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
}
cout<<"\t************************************************************\n";
break;

case 3:
int count=0;
cout<<"\n\t************************************************************\n";
cout<<"\t _____________________BOOKS LIST (>500)_____________________\n\n";
cout<<"\n\t************************************************************\n";
cout<<"\t\t\t_NAMES_\t\t_COST_\n";
for(i=0;i<size;i++)
{
 if(books[i].cost>500)
 {
cout<<"\t\t\t"<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
 }
else
{
count++;
}
}
cout<<"\n\t************************************************************\n";
break;

case 4:
cout<<"\nCount of Books (<=500) : "<<count<<"\n";
break;

case 5:exit(0);
break;

default:cout<<"Wrong Choice\n";
}
}while(1);
return 0;
}
