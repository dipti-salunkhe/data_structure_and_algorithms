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
	int num;
	cout<<"\n enter its decimal number but 0 to 15";
	   cin>>num;
	   cout<<"\n 2's compliment is\n";
		  if(array[0]==0)                                       ///for 1st index
			  cout<<"1"<<"\t";
		  else if(array[0]==1)
			  cout<<"0"<<"\t";

		  if(num%4==0)	  	  	 	                ////for 2nd index
		  cout<<array[1]<<"\t";
		  else

		  {  if(array[1]==0)
				  cout<<"1"<<"\t";
			  else if(array[1]==1)
				  cout<<"0"<<"\t";
		  }



		  if(num%2==0)						/////for 3rd index
			  cout<<array[2]<<"\t";
		  else
		  {  if(array[2]==0)
		  				  cout<<"1"<<"\t";
		  			  else if(array[2]==1)
		  				  cout<<"0"<<"\t";
		  }


		  if(array[3]==0)                                      /////for 4th index
			  cout<<"0"<<"\t";
		  else if(array[3]==1)
			  cout<<"1"<<"\t";


}

int main()
{ stack s;int top,num;

   cout<<"\n enter  binary number";
   for(int i=0;i<4;i++)
	   s.push();



  	   s.display();


return 0;
}
