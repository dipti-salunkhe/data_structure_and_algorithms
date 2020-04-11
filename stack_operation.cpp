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
  void push(char);
  char  pop();
  int priority(char);

  int empty()
  {
	  if(top==NULL)
		  return 1;
	  else
		  return 0;
  }

};
void stack::push(char s)
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
int stack::priority(char d)
{
    if(d=='*' || d=='/')
    	return 3;
    else if(d =='+' || d =='-')
    	return 2;
    else
    	return 0;

}
int main()
{   stack s1;
string str;
cout<<"\n enter infix expression";
cin>>str;
 int i=0;
 char ch;
 while(str[i]!='\0')
 {
     if(str[i]=='(')									///if string is having ( push it
	 {	 s1.push(str[i]);

	 }
	 										/////if operator r there

      else if(str[i]=='+'  || str[i]=='*' || str[i]=='-' || str[i]=='/')
	   {
           if(s1.empty())								///if stack is empty simply push
           {
        	   s1.push(str[i]);
           }
           else								///stack is not empty before push check priority
           { int c=s1.pop();
        	   if( (s1.priority(str[i])) >= (s1.priority (c))  )
        	   {    s1.push(c);
        	        s1.push(str[i]);

        	   }
        	   else								///pop till inside one has greater priority
        	   {
        		   while(s1.priority(c)>s1.priority(str[i]))
        		   {
        			   cout<<c;
        		   if(!s1.empty())
        			   c=s1.pop();
        		   else
        			   break;
        		   }
        	   }
           }

	   }


	 else if(str[i]==')')                                   //////if ) comes pop till (
		 {

			 ch=s1.pop();
			 while(ch!='(')
			 { cout<<ch;
			 ch=s1.pop();
			 }
		 }
	 else							////else  print operand
		 cout<<str[i];

i++;
 }

return 0;
}
