#include<iostream>
using namespace std;
class stack
{
    int top;
    int s[100];
public:
    stack(){ top=-1 ; }
    void push(int );
    void pop();
    void deci_bin(int );
};
void stack::push(int a)
{
if(top==99)
    cout<<"\n stack full...";
else{
        top++;
        s[top]=a;    
    }  
}

void stack::pop()
{
if(top==-1)
cout<<"\n Cant pop...";
    else{
   cout<<s[top];
        top--;
}
}
void stack:: deci_bin(int n)
{
    int i=0;
while(n!=0)
    {
    push(n%2);
        n=n/2;
        i++;
}
   cout<<"\n Decimal equivalent :  \n ";
    for(n=0;n<i;n++)
    pop();
    }
int main()
{
    int n;
    stack S;
    cout<<"Enter decimal no : ";
    cin>>n;
    S.deci_bin(n);
    
return 0;
}
