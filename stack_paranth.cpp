#include <iostream>
using namespace std;

struct Stack
{
	char data;
	Stack *next;

};

class Exp
{
	Stack *top;
public:
	Exp()
{
		top=NULL;
}
	void push(char);
	char pop();
	int empty();
};

int Exp::empty()
{
	if(top==NULL)
		return 1;
	else
		return 0 ;

}


void Exp::push(char c)
{
	Stack *nn;
	nn=new Stack;
	nn->data=c;

	if(top==NULL)
	{
		nn->next=NULL;
		top=nn;
	}
	else
	{
		nn->next=top;
		top=nn;

	}
}

char Exp::pop()
{
	char c;
	c=top->data;
	top=top->next;
	return c;
}

	int main()
	{


	Exp obj;
	string str;
	cout<<"Enter the string :";
	cin>>str;
	int i=0;

	while(str[i]!='\0')
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
		{
		obj.push(str[i]);
		i++;
		}
		else
		{
			if(!(obj.empty()))
			{
				char c;
				c=obj.pop();

				if((str[i]==')' && c=='(' )|| (str[i]==']' && c=='[') || (str[i]=='}' && c=='{' ))
					i++;

				else
				{
					cout<<"\nInvalid expression";
					return 0;
				}
			}
			else
			{
				cout<<"\nInvalid expression";
				return 0;
			}

		}
	}
	if(obj.empty())
	{
		cout<<"\n*********VALID statement*********";
	}
	else
	{
		cout<<"\n*********INVALID statement********";
	}

		return 0;
	}



