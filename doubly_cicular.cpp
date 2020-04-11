#include<iostream>
using namespace std;
struct node
{
   int roll_no;
   node *next, *prev;
};
class stud
{node *header[10];
public:
 stud()
  {  for(int i=0;i<10;i++)
	 header[i]=NULL;
  }
   void add_node();
   void display();

};
void stud::add_node()
{   node *nn;
   nn=new node;
   int row;
      cout<<"\n enter row number";
      cin>>row;
      cout<<"\n enter roll no";
      cin>>nn->roll_no;

   if(header[row]==NULL)
   {
	   header[row]=nn;
	   nn->prev=nn->next=header[row];
   }

   else
   {

	   nn->next=header[row];
	   nn->prev=header[row]->prev;

	   header[row]->prev->next=nn;

	   header[row]->prev=nn;
   }

}
void stud::display()
{   node *temp;int i;
for( i=0;i<10;i++)
{   cout<<"\n ------data of row "<<i<<"-------";
    cout<<"\n\n";
	temp=header[i];

if(temp==NULL)
	{
	cout<<"\n Row" << i <<"is empty\n";
	continue;
	}
    while(temp->next!=header[i])
    {	cout<<temp->roll_no<<"---->";
    	temp=temp->next;
    }
    cout<<temp->roll_no;
}
}
int main()
{  stud s1;
int ch;


  cout<<"\n 1:add_node";
      cout<<"\n 2:display";
  do
  { cout<<"\n enter your choice";
	  cin>>ch;
	  switch(ch)
	  {
	  case 1: s1.add_node();
	         break;
	  case 2: s1.display();
	          break;
	  }

  }while(ch<=2);

return 0;
}
