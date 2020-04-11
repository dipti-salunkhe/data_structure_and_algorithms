#include<iostream>
using namespace std;


int main()
{int i,j,a[3][3],b[9][3];
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
k=1;
   b[0][0]=3;
   b[0][1]=3;
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
   {if(a[i][j]!=0)
      {
      b[k][0]=i;
      b[k][1]=j;
      b[k][2]=a[i][j];
    
     k++;
    }}
b[0][2]=k-1;

}

///dispaly sparse

  int l;
l=b[0][2];
cout<<"\n elements in sparse matrix are:";
for(int i=0;i<=l;i++)
  cout<<"\n\t"<<b[i][0]<<"\t"<<b[i][1]<<"\t"<<b[i][2]<<"\n";

return 0;
}
