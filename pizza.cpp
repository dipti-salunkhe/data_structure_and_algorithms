#include<iostream>
using namespace std;

class pizza
{int Q[5],f,r;
public:
pizza()
{
    f=r=-1;
}
void accept_order(int);
int deliver_order();
int fullque();
int emptyque();

};
void pizza::accept_order(int no)
{
	if(f== -1 && r==-1)
	{
		f=r=0;
	}
	else
	{
		r=(r+1)%5;				//this is for when r at 4 its next position will be 0 i.e 5%5=0
	}
	Q[r]=no;
}
int pizza::deliver_order()
{
	int data;
	data=Q[f];

	if(f==r)
		{f=r=-1;}
	else
	{f=(f+1)%5;}
	return data;
}
int pizza::fullque()
{
	if((r+1)%5==f)
		return 1;
	else
		return 0;


}
int pizza::emptyque()
{
	if(f==-1)
		return 1;
	else
		return 0;
}
int main()
{int ch;
	pizza p1;
	cout<<"\n             *****WELLCOME TO DOMINOZ*****\n";

	do
	{
		cout<<"\n 1: Accept Order";
		cout<<"\n 2: Deliver Order";
		cout<<"\n Enter Your Choice:\t";
		cin>>ch;
		switch(ch)
		{
		case 1:  if(p1.fullque())
		            {
			            cout<<"\n Sorry Sir, we can't accept your order now...Please try latter\n";
		            }
		        else
		             {
		        	cout<<"\n Enter Order No";
		        	int no;
		        	cin>>no;
		        	p1.accept_order(no);
		             }
			break;
		case 2: if(p1.emptyque())
		            {
			         cout<<"\n Sorry..There is  no  Order Now\n";
		            }
		        else
		           {
		        	int no;
		        	no=p1.deliver_order();
		        	cout<<"\n Order is Deliverd for No: "<<no;
		        	cout<<endl;
		           }
		}



	}while(ch<=2);
return 0;
}
