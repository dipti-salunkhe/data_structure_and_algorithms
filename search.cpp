#include<iostream>
using namespace std;
#define N 10


int BinarySearch(int A[N], int x, int low, int high)
{
int mid;
if(low>high)
return(-1);
mid= (low+high)/2;
if(x== A[mid])
   return mid;
else if(x<A[mid])
   BinarySearch(A,x,low,mid-1);
else
   BinarySearch(A,x,mid+1,high);
}

int Fib(int n)
{
int a, b, f;
if(n<1)
return n;
a=0;
b=1;
while(b<n)
{
f=a+b;
a=b;
b=f;
}
return a;
}

void FibSearch(int A[N], int n, int key, int f, int b, int a)
{
if(f<1||f>n)
   cout<<"\n The student has not attended the training program. ";
else if(key<A[f-1])
{
if(a<0)
   cout<<"\n The student has not attended the training program. ";
else
  FibSearch(A, n, key,f-a,a,b-a);
}
else if(key>A[f])
{
if(b<1)
    cout<<"\n The student has not attended the training program. ";
else
   FibSearch(A, n, key,f+a,b-a,a-b);
}
else
   cout<<"\n The student has attended the training program. ";
}

int main()
{
int S, choice;
int nmax, result;
char ans;
int Array[N]={11,13,15,17,21,25,28,31,35,39};
nmax=10;
cout<<"\n The roll numbers of students are...\n";
for(int i=0;i<nmax;i++)
cout<<" "<<Array[i];
do
{
cout<<"\n Enter the roll number to search. ";
cin>>S;
cout<<"\n Main Menu ";
cout<<"\n 1.Binary Search \n 2.Fibonacci Search";
cout<<"Enter choice: ";
cin>>choice;
switch(choice)
{
case 1: result = BinarySearch(Array,S,0,nmax-1);
        if(result !=-1)
        cout<<"\n The student attended the training program";
        else
         cout<<"\n The student has not attended the training program. ";
        break;
case 2: FibSearch(Array, nmax-1, S,nmax-1, Fib(nmax-1), Fib(Fib(nmax-1)));
        break;
}
cout<<"\n Do you want to continue?: ";
cin>>ans;
}while(ans=='y'||ans=='Y');
return 0;
}
