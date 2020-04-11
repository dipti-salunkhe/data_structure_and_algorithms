

#include<iostream>
using namespace std;
class stack
{
int top, array[4];
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
	for(int i=0;i<4;i++)
		{
		  if(array[i]==0)
			   cout<<"1"<<"\t";
		  else if(array[i]==1)
			  cout<<"0"<<"\t";

	   }
}

int main()
{ stack s;int top;
   cout<<"\n enter binary number";
   for(int i=0;i<4;i++)
	   s.push();
   cout<<"\n 1's compliment is\n";


  	   s.display();


return 0;
}
