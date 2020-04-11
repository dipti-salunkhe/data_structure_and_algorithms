#include<iostream>
#include<string.h>

using namespace std;
struct st_node
{
     int data;
     st_node *next;
};

class stack
{
	    st_node *top;

public:
  stack()
{
	 top= NULL;
}
  void push(int);
  char  pop();
  int eval(int,int,char);
  int empty()
  {
	  if(top==NULL)
		  return 1;
	  else
		  return 0;
  }

};
void stack::push(int s)
{
	st_node *nn;
	nn=new st_node;
	nn->data=s;

	if(top==NULL)
	{
		top=nn;

	  nn->next=NULL;
	}
	else
	{
		nn->next=top;
		top=nn;
	}
}
char stack::pop()
{
	char c;
	c=top->data;
	top=top->next;

	return c;

}
int stack::eval(int ch1, int ch2, char s)
{
       if(s=='+')
    	   return (ch1+ch2);
       else if(s=='-')
         	   return (ch1-ch2);
       else if(s=='*')
         	   return (ch1*ch2);
       else if(s=='/')
         	   return (ch1/ch2);
}

int main()
{   stack s1;
string str;
cout<<"\n enter postfix expression";
cin>>str;
 int i=0;
 char ch;
 while(str[i]!='\0')
 {
	 if(str[i]=='+'  || str[i]=='*' || str[i]=='-' || str[i]=='/' )
	   {
           if(s1.empty())
           {
        	   cout<<"\n stack is empty";
           }
           else
           {
        	   int ch1,ch2,result;
        	   ch1=s1.pop();
        	   ch2=s1.pop();
        	   result=s1.eval(ch1,ch2,str[i]);
                 s1.push(result);
           }
	   }
	 else
	 {
		int a= str[i]-'0';
		s1.push(a);

	 }

i++;
 }int d=s1.pop();
 cout<<"\n evaluation is"<<d;

return 0;
}
