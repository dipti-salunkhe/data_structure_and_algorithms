#include<iostream>
using namespace std;
struct node
{
   int data;
   node *next;
};
class stack
{
   node *top;
public:
   stack()
{top==NULL;
}
void push();
void pop();



};
void stack::push()
{
node *nn;
nn=new node;
cout<<"\n enter data";
cin>>nn->data;
if(top==NULL)
{
	top=nn;
}
else
{
	nn->next=top;
	top=nn;
}
}
void stack::pop()
{
		if(top==NULL)
		{cout<<"\n stack is empty";
		}
		else
		{
		cout<<"\n element is deleted"<<top->data;
		top=top->next;}

}

int main()
{ stack s1;
int ch;
   cout<<"\n 1:push \n 2:pop";

  while(1)
   {
	   cout<<"\n enter ur choice";
	   cin>>ch;
	   switch(ch)
	   {
	   case 1:s1.push();
			      break;
	   case 2: s1.pop();
	      break;
	   case 3: return 0;
	   }

   }

}
