#include<iostream>
#include<string.h>
using namespace std;
class str_opr
{
	char *s1,*s2,*s3,*s;
	
public:
	void accept();
	void display();
	void copy_str();
	void len_str();
	void concat_str();
	void cmp_str();
        void reverse();
        void substring();

};
void str_opr::accept()
{
	cout<<"\nEnter string 1 : ";
	s1=new char [20];
	cin>>s1;
	cout<<"\n Enter string 2: ";
	s2=new char[20];
	cin>>s2;
}
void str_opr::display()
{       cout<<"\n";
	cout<<s1<<endl;
        cout<<s2;
}
void str_opr::copy_str()
{
int  i=0;
s3=new char [20];
while(s1[i]!='\0')
{ s3[i]=s1[i];
 i++;
//s3[i]='\0';
} 
cout<<"\n after coping string 1 into string 3 is";
  cout<<"\n"<<s3<<"\n";


}
void str_opr::len_str()
{int l1=0,l2=0;
	for(int i=0;s1[i]!='\0';i++)
        {  l1++;
        }
         cout<<"\n length of s1=\n"<<l1;

        for(int i=0;s2[i]!='\0';i++)
        {  l2++;
          }
        cout<<"\n length of s2=\n"<<l2;
}
void str_opr::concat_str()
{
	int i=strlen(s1);
       for(int j=0;s2[j]!='\0';j++,i++)
        { s1[i]=s2[j];
        s2[j]='\0';
         }
        cout<<"\n after concatenation string is";
         cout<<"\n"<<s1<<"\n";
}
void str_opr::cmp_str()
{
	int i=0;
       while(s1[i]==s2[i]  && s1[i]!='\0')
         i++;
    {
     if(s1[i]>s2[i])
           cout<<"\ns1 is greater\n";
     else if(s1[i]<s2[i])
           cout<<"\ns2 is greater\n";
     else
           cout<<"\nthey are equal\n";
    }



}
void str_opr::reverse()
{
    int j=0;
   s=new char [20];
    cout<<"enter string to be reversed";
    cin>>s;
    int i=strlen(s)-1;
    while(j<i)
    {  
     char temp=s[i];
     s[i]=s[j];
     s[j]=temp;
     j++;i--;
    }
    cout<<"\n reverse string is\t"<<s<<endl;
}
void str_opr::substring()
{

    int l,flag=0,i=0,j=0;
    char s[10],sb[10];
       cin>>s;
      cout<<"\n Enter substring to be search : ";
       cin>>sb;
        for(l=0;sb[l]!='\0';l++);
       cout<<"length : "<<l;
       while(s[i]!='\0')
       {
           if(s[i]==sb[j])
              {
                 i++;j++;
                 if(j==l-1)
                 flag=1;
              }
           else
              {i++;
                  if(j==l-1)
                   {
                     j=0;
                   }
              }
       }
     if(flag==1)
     {
       cout<<"\n substring found ";
          }
     else
       {cout<<"\n not found ";
       }



}
int main()
{
	str_opr o1;
	o1.accept();
	o1.display();
        o1.len_str();	
	o1.copy_str();
        o1.concat_str();
        o1.reverse();
        o1.substring();



	return 0;
}


