#include<iostream>
using namespace std;
struct node{
    int element;
    struct node *next;
};
struct node *top=NULL,*ptr;
void push()
{
struct node *temp=new node;
    int data;
    cout<<"\nEnter element:";
    cin>>data;
    temp->element=data;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
        cout<<data<<" pushed into Stack";
    }
    else 
    {
        temp->next=top;
        top=temp;
        cout<<data<<" pushed into Stack";

    }
}
void pop()
{
   if(top==NULL)
   {
       cout<<"Stack Underflow!";
   }
   else
   {
       cout<<top->element<<" poped out from Stack";
       ptr=top;
       top=top->next;
       delete(ptr);
   }
}
void display()
{
 if(top==NULL)
   {
       cout<<"Stack is empty now!";
   }   
   else
   
   {  
       ptr=top;
       cout<<"-------------------------------------------------"<<endl;
       cout<<"Stack Elements:";
       while(ptr!=NULL)
       {
           cout<<ptr->element<<" ";
           ptr=ptr->next;
       }
       cout<<endl<<"----------------------------------------------"<<endl;
   }
}
int main()
{
    int ch;
    cout<<"\n\t\t--------------------Stack Menu----------------";
    cout<<"\n\n\t\t\t\t1).Push an element";
    cout<<"\n\n\t\t\t\t2).Pop an element";
    cout<<"\n\n\t\t\t\t3).Display Stack";
    cout<<"\n\n\t\t\t\t4).Enter 0 to exit";
    while(ch!=0)
    {
        cout<<"\nEnter Choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 0:
            {
                cout<<"Exited From Menu...";
                exit(0);
            }
            break;
            default:
            {
                cout<<"Invalid Response!";
            }
        }
    }
}