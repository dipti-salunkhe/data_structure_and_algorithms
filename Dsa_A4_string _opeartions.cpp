#include<iostream>
using namespace std;
char str1[20],str2[20];
class String
{
        private:int i,j,a=0,len;
        public:
        
        void str_len();
    void str_compare();
    void str_cpy();
void str_concat();
    void str_sub();
    void str_rev();
}s;
void String :: str_len()
        {
                len=0;
               for(i=0;str1[i]!='\0';i++) 
               {
                len++;
               }
               cout<<"String length = "<<len<<endl;
        }
void String :: str_cpy()
        {
                for(i=0;str1[i]!='\0';i++) 
                {
                        str2[i]=str1[i];
                }  
                str2[i]='\0';
                cout<<"Copy of string is : "<<str2<<endl;      
        }
       
 void String :: str_rev()
        {
                cout<<"Reverse of string is : ";
                for(i=len;i>=0;i--)
                cout<<str1[i];
        }
        
void String :: str_compare()
        {
                 cout<<"\nENTER second string : ";
                 cin>>str2;  
                  //for(i=0;str1[i]!='\0';i++); 
                        for(j=0;str1[i]!='\0' && str1[i]==str2[j];j++) 
                        	i++;
                        if(str1==str2)
                  cout<<"Strings are equal!!\n";   
                  else
                  cout<<"Strings are NOT equal!!\n";   
        }
        

void String :: str_concat()
        {
                 cout<<"\nENTER second string : ";
                 cin>>str2;
                  for(i=0;str1[i]!='\0';i++);
                  for(j=0;str2[j]!='\0';j++)
                  {
                        str1[i]=str2[j];
                        i++;
                  }  
                  str1[i]='\0';  
                  cout<<"Concatenation of string is:"<<str1<<endl;       
        }
        
void String :: str_sub()
        {
                 cout<<"\nENTER second string : ";
                 cin>>str2;
                 int l;
                 for(l=0;str2[l]!='\0';l++); 
                 for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++) 
                 {
                        if(str1[i]==str2[j])
                        j++;
                        else
                        j=0;
                 } 
                 if(str2[j]=='\0')
                 cout<<"Given string is substring !!\n";
                 else 
                 cout<<"Given string is NOT substring!!\n";     
        }

int main()
{
	int op;
        char ch;
        cout<<"ENTER string:"<<endl;
        cin>>str1; 
        do
        { 
        cout<<"\nSelect which operation u want : \n1. Length\n2. Copy\n3. Reverse\n4. Compare\n5. Concat\n6. Substring\n";
        cout<<"\nEnter ur choice : ";
        cin>>op;
        switch(op)  
        {    
                case 1: s.str_len();
                break;
                case 2: s.str_cpy();
                break;
                case 3: s.str_rev();
                break;
                case 4: s.str_compare();
                break;
                case 5: s.str_concat();
                break;
                case 6: s.str_sub();
                break;
        }
        cout<<"\nDo u want to continue?(y/n) : ";
        cin>>ch;
        }while(ch=='y'||ch=='Y');
return 0;
}
