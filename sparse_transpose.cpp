#include<iostream>
using namespace std;
int main()
{

 
int i,j,a[3][3],b[9][3],a1[9][3];
int m,n,k;
////normal create
cout<<"\n enter the elements in matrix";
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    cin>>a[i][j];
  }
////normal display
cout<<"\n elements in simple matrix are\n";
   for(i=0;i<3;i++)
  { for(j=0;j<3;j++)          
   { cout<<"\t"<<a[i][j];
}cout<<"\n";}
////spares
k=1;int count=0;
   a1[0][0]=3;
   a1[0][1]=3;
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
   {if(a[i][j]!=0)
      {
      a1[k][0]=i;
      a1[k][1]=j;
      a1[k][2]=a[i][j];
      count++;
     k++;
    }}
a1[0][2]=k-1;

}cout<<"\n count is"<<count;

///dispaly sparse

 
cout<<"\n elements in sparse matrix are:";
for(int i=0;i<=a1[0][2];i++)
  cout<<"\n\t"<<a1[i][0]<<"\t"<<a1[i][1]<<"\t"<<a1[i][2]<<"\n";



 

/*   transpose of sparse */
cout<<"\n elements in transpose matrix are";
a1[0][0]=3;
a1[0][1]=3;
a1[0][2]=count;
b[0][0]=3;
b[0][1]=3;
b[0][2]=count;
k=1;
cout<<"\n"<<b[0][0]<<"\t"<<b[0][1]<<"\t"<<b[0][2]<<"\n";
for(int cv=0;cv<=b[0][1];cv++)
   { for(int i=1;i<=b[0][2];i++)
     {if(cv==a1[i][1])
        {b[k][0]=cv;
         b[k][1]=a1[i][0];
         b[k][2]=a1[i][2];
          
   cout<<b[k][0]<<"\t"<<b[k][1]<<"\t"<<b[k][2]<<"\n";
       k++;
}
}}



return 0;
}
