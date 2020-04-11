#include <iostream>
using namespace std;

class matrix
{
	int no_nzterms,rows,cols,i,j,k;
	int a[10][10];
	int b[10][3];
	int c[10][10];
	int d[10][10];
public:
	void getdata();
	matrix add(matrix, matrix);
	int get_rows();
	int get_cols();
	void stranspose();
	void ftranspose();
	void tupple();
};

int matrix :: get_rows()
{
	return rows;
}

int matrix :: get_cols()
{
	return cols;
}

void matrix :: getdata()
{
	// Accepting sparse matrix
	cout<<"Rows: ";
	cin>>rows;
	cout<<"Columns: ";
	cin>>cols;

	cout<<"Enter the elements in the sparse matrix row wise";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cin>>k;
			a[i][j]=k;
		}
	}
	// Display of sparse matrix
	cout<<"Displaying the given matrix\n";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<" "<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void matrix :: tupple()
{

	//Conversion to 3 tupple representation
	b[0][0]=rows;
	b[0][1]=cols;
	no_nzterms=1;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(a[i][j]!=0)
			{
				b[no_nzterms][0]=i;
				b[no_nzterms][1]=j;
				b[no_nzterms][2]=a[i][j];
				no_nzterms++;
			}
		}
	}
	b[0][2]=no_nzterms-1;
	// Display of 3 tupple representation
	cout<<"Displaying the 3 tupple matrix\n";
	for(i=0;i<no_nzterms;i++)
	{
		cout<<"| ";
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"|\n";
	}

}

void matrix :: stranspose()
{

	// Simple transpose of matrix
		c[0][0]=cols;
		c[0][1]=rows;
		c[0][2]=no_nzterms-1;
		int nxt,s,T;
		nxt=1;
		if(nxt<=no_nzterms)
		{
				for(s=0;s<cols;s++)
			{
					for(T=1;T<=no_nzterms;T++)
					{
					if(s==b[T][1])
						{
					c[nxt][0]=b[T][1];
					c[nxt][1]=b[T][0];
					c[nxt][2]=b[T][2];
						nxt++;
						}

					}
			}
		}
		// Displaying the simple transpose
		cout<<"Simple transpose is\n";
		for(i=0;i<no_nzterms;i++)
			{
				cout<<"| ";
				for(j=0;j<3;j++)
				{
					cout<<c[i][j]<<" ";
				}
				cout<<"|\n";
			}

}
void matrix :: ftranspose()
{

	//Fast transpose

	int terms[3];
	int rpos[3];

	for(int l=0;l<cols;l++)
	{
			terms[l]=0;
	}
	for(int k=1;k<no_nzterms;k++)
	{
		terms[b[k][1]]++;
	}
	rpos[0]=1;
	for(i=1;i<=no_nzterms;i++)
	{
		rpos[i]=rpos[i-1]+terms[i-1];
	}
	for(i=1;i<=no_nzterms;i++)
	{
		int j;
		j=rpos[b[i][1]];
		d[j][0]=b[i][1];
		d[j][1]=b[i][0];
		d[j][2]=b[i][2];
		rpos[b[i][1]]=j+1;
	}
	d[0][0]=cols;
	d[0][1]=rows;
	d[0][2]=no_nzterms-1;
	//	Displaying the fast transpose
	cout<<"Fast transpose is\n";
	for(i=0;i<no_nzterms;i++)
		{
			cout<<"| ";
			for(j=0;j<3;j++)
			{
				cout<<d[i][j]<<" ";
			}
			cout<<"|\n";
		}
}
matrix matrix :: add(matrix m1,matrix m2)
{
	matrix m3;
	int i=1,j=1,k=1;
// Assuming that the matrix can be added that is m1.rows = m2.rows and
// m1.columns = m2.columns
	m3.b[0][0]=m1.get_rows();
	m3.b[0][1]=m1.get_cols();


if( m1.b[0][0]==m2.b[0][0] && m1.b[0][1]==m2.b[0][1] )
{
while(i<=m1.b[0][2] && j<=m2.b[0][2])
		{


			if(m1.b[i][0]==m2.b[j][0])
			{
				if(m1.b[i][1]==m2.b[j][1])
				{
				m3.b[k][0]=m1.b[i][0];
				m3.b[k][1]=m1.b[i][1];
			m3.b[k][2]=m1.b[i][2] + m2.b[j][2] ;
					i++;j++;k++;
				}
				else
				{
				if(m1.b[i][1]>m2.b[i][1])
					{
				m3.b[k][0]=m2.b[i][0];
				m3.b[k][1]=m2.b[i][1];
				m3.b[k][2]=m2.b[i][2];
						i++;k++;
					}
					else
					{

				m3.b[k][0]=m1.b[i][0];
				m3.b[k][1]=m1.b[i][1];
				m3.b[k][2]=m1.b[i][2];
						i++;k++;
					}
				}
			}
			else
			{
				if(m1.b[i][0]>m2.b[i][0])
				{
				m3.b[k][0]=m2.b[i][0];
				m3.b[k][1]=m2.b[i][1];
				m3.b[k][2]=m2.b[i][2];
					i++;k++;
				}
				else
				{
				m3.b[k][0]=m1.b[i][0];
				m3.b[k][1]=m1.b[i][1];
				m3.b[k][2]=m1.b[i][2];
					i++;k++;
				}
			}
		}
m3.b[0][2]=k-1;
cout<<"Addition of the two 3 tupple matrices is\n";
	for(i=0;i<=b[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<m3.b[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
else
{
	cout<<"Addition is not possible";
}

	return m3;
}

int main()
{
	matrix m1,m2,m3;
	int ch;
	do
	{
	cout<<"\n1. The sparse matrix";
	cout<<"\n2. Convert the sparse matrix to three tupple representation";
	cout<<"\n3. Simple transpose of entered matrix";
	cout<<"\n4. Fast transpose of entered matrix";
	cout<<"\n5. Addition of the two matrices";
	cout<<"\n6. EXIT";
	cout<<"\n Enter your choice";
	cin>>ch;

	switch(ch)
	{
	case 1:		m1.getdata();
				break;
	case 2:		m1.tupple();
				break;
	case 3:		m1.stranspose();
				break;
	case 4:		m1.ftranspose();
				break;
	case 5:
				cout<<"\nEnter the elements for second matrix";
				m2.getdata();
				m2.tupple();
				matrix m3;
				m3 = m1.add( m1 , m2);

				break;
				
	}


	}while(ch<=5);
	return 0;
}
