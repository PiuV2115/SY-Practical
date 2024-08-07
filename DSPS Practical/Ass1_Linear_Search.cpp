//Linear Search

#include <iostream>
using namespace std;
class linear
{
    public:
    int i,j,a[10],temp=0,flag=0,size,key,press;
    
    void sort()
    {
        cout<<"Enter Your Size of Array:  ";
        cin>>size;
        cout<<"\nEnter Array Elements:  ";
        for(i=0;i<size;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<size;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]>a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<"\nSorted Element are : ";
        for(i=0;i<size;i++)
        {
            cout<<""<<a[i]<<"\t";
        }
    }
    
    void search()
    {
        do{
        cout<<"\nEnter Key Element you want search:  ";
        cin>>key;
        for(i=0;i<size;i++)
        {
            if(key==a[i])
            {
                pos=i;
                break;
            }
            
        }
        for(i=0;i<size;i++)
        {
            if(key==a[i])
            {
                pos1=i;
                count++;
                flag=1;
                continue;
            }
        }
        if(flag!=1)
        {
            cout<<"\n\t\t*************************************************\n";
            cout<<"\t\t____*****____*****____RESULT____*****____*****____\n\n";
              cout<<"\n\t\t*************************************************\n";
            cout<<"\n\nElement "<<key<<" is NOT Found " ;  
              cout<<"\n\t\t*************************************************\n";
        }
        else
        {
            cout<<"\n\t\t*************************************************\n";
            cout<<"\t\t____*****____*****____RESULT____*****____*****____\n\n";
            cout<<"\n\t\t*************************************************\n";
            cout<<"\t\t# Element "<<key<<" is FOUND\n";
            cout<<"\t\t# First Position of Element "<<key<<" is  : \n"<<pos;
             cout<<"\t\t# Last Position of Element "<<key<<" is : \n"<<pos1;
              cout<<"\t\t# count of Element "<<key<<" is : \n"<<pos1;
             cout<<"\n\t\t*************************************************\n";
            
        }
        cout<<"\n\nDo You want to search Again , Press 1 : ";
        cin>>press;
        }while(press==1);
    }
};
int main()
{
   linear p1;
   p1.sort();
   p1.search();

    return 0;
}
