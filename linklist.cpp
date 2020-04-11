#include<iostream>
using namespace std;
struct node
{
  int roll_no;
  node *next;


};
 class stud
 {
	node *header;
 public:
	stud()
 {header =NULL;}
	void add_node();
	void display();
	void delete_node();
 };
 void stud::add_node()
 {
	node *nn;
	nn=new node;
	cout<<"\n enter roll no";
	cin>>nn->roll_no;
	nn->next=NULL;
	if(header==NULL)
		header=nn;
	else
		{
		node *temp;
		temp=header;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=nn;
		}


 }
 void stud::display()
 {
	 node *temp;
	 temp=header;
	 while(temp!=NULL)
	 { cout<<temp->roll_no<<"\t--->";
	 temp=temp->next;
 }
 }
 void stud::delete_node()
 {int n,cnt=0;
	 node *temp,*prev;
	 prev=NULL;
	 temp=header;
	 cout<<"\n enter position u want to delete";
	 cin>>n;
	 while(temp!=NULL && cnt!=n)
	 {
		 prev=temp;
		 temp=temp->next;
		 cnt++;
	 }
	 if(temp==NULL)
		 cout<<"\nInvalid Position";
	 else
	 	 prev->next=temp->next;
}

 int main()
 {
	 stud s1;
	 int choice;

     cout<<"\n 1: add_node";
     cout<<"\n 2:display";
     cout<<"\n 3:delete";

   do
   {cout<<"\n enter ur choice";
   cin>>choice;
	   switch(choice)
	   {case 1:
		  s1. add_node();break;
	   case 2:
		   s1.display(); break;
	   case 3:
		   s1.delete_node();break;
	   }
   }while(choice<=3);


	 return 0;

 }

