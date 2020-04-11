#include<iostream>
using namespace std;
class proff_rec;
class personal_rec
{int age;
  char add[20],name[20];
public:
  personal_rec()
{
	  cout<<"\n inside personal";
}
  void getdata()
  {
	  cout<<"\n name:\t";
	  cin>>name;
	  cout<<"\n address:\t";
	  cin>>add;
	  cout<<"\n age:\t";
	  cin>>age;
  }
  void display()
  {
	  cout<<"\n name:\t"<<name;
	  cout<<"\n address:\t"<<add;
	  cout<<"\n age:\t"<<age;

  }

};
class proff_rec
{  int id;
   char company_name[20] ,designation[20];
public:
   proff_rec()
{
    cout<<"\n inside proff";
}
   void getdata()
   {
	   cout<<"\n  designation:\t";
	   cin>>designation;
	   cout<<"\n conmapy name:\t";
	   cin>>company_name;
	   cout<<"\nid no:\t";
	   cin>>id;
   }
   void display()
   {
	   cout<<"\n designation:\t"<<designation;
	   cout<<"\n company name:\t"<<company_name;
	   cout<<"\n id:\t"<<id;
   }

};
class acadmic_rec : public  personal_rec, public proff_rec
{   float HSC,SSC;
char degree[10];
public:
acadmic_rec()
{
     cout<<"\n inside acadmic";
}
  void getdata3()
  {
	  cout<<"\n qualifiaction:\t";
	  cin>>degree;
	  cout<<"\n HSC_mark:\t";
	  cin>>HSC;
	  cout<<"\n SSC_marks:\t";
	  cin>>SSC;
  }
  void display3()
  {
	  cout<<"\n qualify:\t"<<degree;
	  cout<<"\n SSC:\t"<<SSC;
	  cout<<"\n HSC:\t"<<HSC;
  }


};



int main()
{  acadmic_rec A;
   personal_rec p;
   proff_rec pe;
A.personal_rec::getdata();
A.proff_rec ::getdata();
A.getdata3();
cout<<"\n------BIODATA-------\n";
  cout<<"\n----------personal info---------\n";

   A.personal_rec::display();
   cout<<"\n---------proffesional info-------\n";

   A.proff_rec::display();
   cout<<"\n-----------acadmic info-------\n";

   A.display3();




return 0;
}
