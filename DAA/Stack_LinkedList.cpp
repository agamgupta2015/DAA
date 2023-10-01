
#include<iostream>
using namespace std;
class Node
{
    private:
    int data;
    Node *link;

    public:
	friend class Stack_Sll;

};

class Stack_Sll
{

Node *top ;
public:
    Stack_Sll()      // Default constructor
    {
        top = NULL;
    }

bool isempty()
{

    if(top==NULL)
    return true;
    else
        return false;
}

void push(int value)
{

Node *ptr =new Node();
    ptr->data =value;
    ptr->link =top;
    top=ptr;
}

void pop()
{
    if(isempty())
    {

        cout<<" STACK EMPTY "<<endl;
    }
    else
    {
        Node *ptr=top;
        top=top->link;
        delete(ptr);
    }
}
void showTop()
{
    if(isempty())
       {

        cout<<" STACK EMPTY "<<endl;
       }
    else
    {
        cout<<" TOP ELEMNET "<<top->data<<endl;
    }
}

void display()
{
    if (isempty())
    {
        cout<<" STACK EMPTY "<<endl;
    }
    else
    {
        Node *ptr1=top;
        while(ptr1!=NULL)
        {
            cout<<ptr1->data <<"  ";
            ptr1 =ptr1->link;
        }
    }
}


};

int main()
{
   Stack_Sll s;
   int c;
   int el;
   char choice='y';
   while(choice=='y')
   {


   cout<<" STACK USING LINKED LIST ->"<<endl;
   cout<<" \n 1. PUSH  \n 2.POP \n 3.TOP ELEMENT \n 4.DISPLAY"<<endl;
   cout<<" ENTER THE CHOICE "<<endl;
   cin>>c;
   if(c==1)
   {

    cout<<" ENTER THE ELEMNET YOU WANT TO PUSH "<<endl;
   cin>>el;
    s.push(el);
   }
   if(c==2)
   {
       s.pop();
   }
   if(c==3)
   {
       s.showTop();
   }
   if(c==4)
   {
       s.display();
   }

   cout<<" ENTER y TO CONTINUE THE PROGRAM "<<endl;
   cin>>choice;


   }
}

