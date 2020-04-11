#include<iostream>
using namespace std;
template<class T>
class vector
{
	T  v[10];
	 int n;

public:
vector()
{ int n;
for(int i=0;i<n;i++)
	v[i]=0;
}
void create();
void display();
void modify();
void multi();

};
template<class T>
void vector<T>::create()
{
	cout<<"\n How Many Elements you want to take :\t";
	cin>>n;
	cout<<"\n enter elements in vector \t";
	for(int i=0;i<n;i++)
		cin>>v[i];

}
template<class T>
void vector<T>::display()
{int i;
	 cout<<"\n vector:\n";
	 cout<<"(";
	 for(i=0;i<n-1;i++)           ///imp
	 {	cout<<v[i]<<" ,";
	 }
	 cout<<v[i]<<")";

}
template<class T>
void vector<T>::modify()
{  T m;
    cout<<"\n enter value to be modify \n";
    cin>>m;
    for(int i=0;i<n;i++)
    	{if(v[i]==m)
    	{	cout<<"\n enter new value \n";
             cin>>v[i];
    	}
    	}
}
template<class T>
void vector<T>::multi()
{  T s;
     cout<<"\n enter scalar multiplier \n";
     cin>>s;
     for(int i=0;i<n;i++)
    	 v[i]=v[i]*s;
}
int main()
{ vector <int>v;
int ch,n;
char j;

  v.create();
  v.display();
  do
  {
	  cout<<"\n 1:modify \t 2: scalar ";
	  cout<<"\n enter your choice :\t";
	 	      cin>>ch;

	  switch(ch)
	  {
	  case 1: v.modify();
	          cout<<"\n Modified  Vector:\t";
	           v.display();
	  	  	  break;
	  case 2: v.multi();
	           cout<<"\n Modified  Vector:\t";
	           v.display();
	  	  	  break;
	  }
    cout<<"\n\n";
   cout<<"\n Do you want to continue (y):\t";
   cin>>j;
  }while(j=='y');
  cout<<"\n  EXIT FROM CODE \n";


return 0;
}
