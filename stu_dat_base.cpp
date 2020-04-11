#include<iostream>
#include<string.h>
using namespace std;
class student
{
 int phone,rno;
	char name[20],blood_group[5];
	char cls[5],dob[15],DL[15];
	char add[10];
       char div;
       static int counter;
public:

	void display_data();
	void get_data();



student()
{cout<<"\n inside default constuctor:\n";
strcpy(name, "");
strcpy(cls, "SE");
div = 'B';
strcpy(add, "");
strcpy(dob, "");
strcpy(blood_group, "");
strcpy(DL, "");
rno = 0;
phone = 0;

}

student(student &s)
{cout<<"\n inside copy constuctor:\n";
strcpy(name, s.name);
strcpy(cls, s.cls);
div = s.div;
strcpy(add,s.add);
strcpy(dob, s.dob);
strcpy(blood_group, s.blood_group);
strcpy(DL,s.DL);
rno = counter;
phone = 0;

}



student(char name[20], char cls[5], char div, char add[20],
		char dob[15], char blood_group[5], char DL[10], int phone)
{
	cout << "\n---------- Inside copy constructor...";
counter++;
this->rno = counter;
cout << "\n----------assigning Details to Student[" << rno << "] --------\n";
strcpy(this->name, name);
strcpy(this->cls, cls);
strcpy(this->add, add);
strcpy(this->dob, dob);
strcpy(this->blood_group, blood_group);
strcpy(this->DL, DL);
this->phone = phone;
this->div = div;
}



~student()
{cout<<"\n inside the destroctor\n";
	}
static int get_no_stud()
{return counter;
	}

};

void student :: get_data()
{counter++;
rno= counter;
cout << "\n----------assigning Details to Student[" << rno << "] --------\n";
	cout<<"\nEnter student details : \n";
	cout<<"Name : \t";
	cin>>name;
	cout<<"\nDivision : \t";
	cin>>div;
	cout<<"\nClass. : \t";
	cin>>cls;
	cout<<"\nDate of birth :\t ";
	cin>>dob;
	cout<<"\nBlood group : \t";
	cin>>blood_group;
	cout<<"\nPhone no. : \t";
	cin>>phone;
	cout<<"\nDriving lisence no.: \t";
	cin>>DL;
	cout<<"\nAddress : \t";
	cin>>add;
}
void student :: display_data()
{

	cout<<"Details of the student are  : \n";
	cout<<"\nName : \t"<<name<<"\nDivision : \t"<<div<<"\nClass : \t"
			""<<cls<<"\nDate of birth : \t"<<dob<<"\nBlood group : \t"
			<<blood_group<<"\nAddress : \t"<<add<<"\nPhone no. : \t"
			<<phone<<"\nDriving lisence no : \t"<<DL;
}
int student ::counter =0;
int main()
{int i,num=0;
	student *s= new student[num];

cout<<"\n enter the num of student";
cin>>num;

for(i=0;i<num;i++)
	s[num].get_data();

	cout<<"\n\n***************DETAILS OF STUDENTS ARE***********************\n";

	for(i=0;i<num;i++)
	s[num].display_data();

	student s1("stud_name", "SE", 'B', "PCCOE,Pune", "10-07-16","A+", "777", 12345);
	cout<<"\n\nExit from the program...\n\n\n\n\n";
	student s3(s1);
	s3.display_data();

	delete [] s;
return 0;
}
