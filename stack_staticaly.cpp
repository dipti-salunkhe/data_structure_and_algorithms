#include<iostream>
using namespace std;
class stack
{
int top, array[5];
public:
  stack()
{
    top=-1;
}
  void push();
  void pop();
  void display();


};
void stack::push()
{
 if(top==4)
	 cout<<"\n sorry, stack is full";
 else
 {    top++;
	 cout<<"\n enter the value ";
     cin>>array[top];
 }
}
void stack::pop()
{
	if(top==-1)
		cout<<"\n sorry, stack is empty";
	else
	{ cout<<"\n element is deleted "<<array[top];
	  top--;
	}

}
void stack::display()
{
	for(int i=top;i>=0;i--)
		{cout<<"\t"<<array[i]<<"\n";
	   }
}

int main()
{ stack s;
   int ch;

   cout<<"\n 1.push \n 2.pop \n 3.display";
   do
   {  cout<<"\n enter ur choise";
         cin>>ch;
   switch(ch)
     {
     case 1: s.push();
         break;
     case 2: s.pop();
         break;
     case 3: s.display();
         break;
     }
   }while(ch<=3);
return 0;
}
