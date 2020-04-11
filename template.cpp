#include<iostream>
using namespace std;
template <class T>
class sort
{
	T a[10];
	int n;
public:
	void getdata();
	void showdata();
	void bubblesort();
	void selectionsort();

};
template <class T>
void sort<T>::getdata()
{

  cin>>n;
  cout<<"\n enter "<<n<<"elements\n";
  for(int i=0;i<n;i++)
  {
	  cin>>a[i];
  }
}
template <class T>
void sort<T>::showdata()
{ cout<<"\n sorted elements are:\n";
	for(int i=0;i<n;i++)
    {
  	  cout<<a[i]<<"\t";
    }
	cout<<"\n\n";
}
template <class T>
void sort<T>::bubblesort()
{cout<<"\n\n******* bubble sort********** \n\n";
   for(int i=0;i<n-1;i++)
      { for(int j=i+1;j<n;j++)
      	  { if(a[i]>a[j])
      	    { T temp=a[i];
      	    a[i]=a[j];
      	    a[j]=temp;

      	    }
      	  }
      	cout<<"\npass ";
      	for(int k=0;k<n;k++)
      		cout<<a[k]<<" ";

      }
}
template <class T>
void sort <T> ::selectionsort()
{  cout<<"\n\n******* selection sort is*******\n\n";
   for(int i=0;i<n;i++)
   {  int  min=i;
	   for(int j=i+1;j<n;j++)
	   {
	       if(a[j]<a[min])
			   min=j;
	   }
	 T  temp=a[i];
	   a[i]=a[min];
	   a[min]=temp;
		cout<<"\n  pass \n ";
	      	for(int k=0;k<n;k++)
	      		cout<<a[k]<<" ";
}
}

int main()
{
  sort <int>s;
cout<<"\n how many integer u want to enter";
cout<<"\n-----INTEGER-----\n";

  s.getdata();
  s.bubblesort();
  s.showdata();
  s.selectionsort();
  s.showdata();
  sort <float>s1;

  cout<<"\n  how many float no  u want to enter";
  cout<<"\n------FLOAT----\n";

  s1.getdata();
  s1.bubblesort();
  s1.showdata();
  s1.selectionsort();
  s1.showdata();
   sort <char> s2;

   cout<<"\n  how many char  u want to enter";
   cout<<"\n-----CHAR-----\n";

   s2.getdata();
   s2.bubblesort();
   s2.showdata();
   s2.selectionsort();
   s2.showdata();

     return 0;
}
