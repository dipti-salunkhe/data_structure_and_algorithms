#include<iostream>
using namespace std;
class sparse
{
int s1[8][3],s2[8][3],s3[8][3];
    int r,c;
    public:
void add();
    void transpose();
};
void sparse :: transpose()
    {
    int i,j,k;
    for(i=0;i<c;i++)
    {
    if(i==c)
        s3[
}
    
}
void sparse :: add()
{
int i,j,val;
	int k=1;
	cout<<"Enter no of rows and cols for first matrix : \n";
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"index no ["<<i<<"]["<<j<<"]";
			cin>>val;
			if(val!=0)
		    {
			s1[k][0]=i;
			s1[k][1]=j;
			s1[k][2]=val;
			k++;
			}
		}
	}
	k=k-1;
	s1[0][0]=r;
	s1[0][1]=c;
	s1[0][2]=k;
	cout<<"\n\n Sparse 1 is : \n";
		for(i=0;i<=k;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"  "<<s1[i][j];
			}
			cout<<endl;
		}
	cout<<"Enter no of rows and cols for second matrix : \n";
	cin>>r>>c;
	k=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"index no ["<<i<<"]["<<j<<"]";
			cin>>val;
			if(val!=0)
		    {
			s2[k][0]=i;
			s2[k][1]=j;
			s2[k][2]=val;
			k++;
			}
		}
	}
	k=k-1;
	s2[0][0]=r;
	s2[0][1]=c;
	s2[0][2]=k;


	cout<<"\n\n Sparse 2 is : \n";
	for(i=0;i<=k;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"  "<<s2[i][j];
			}
			cout<<endl;
		}

	cout<<"\n Addition of sparse matrices is : \n";
	s3[0][0]=s1[0][0];
	s3[0][1]=s1[0][1];
	if(s1[0][0]==s2[0][0] && s1[0][1]==s2[0][1])
	{
	k=1;j=1;i=1;
	while(i<=s1[0][2] && j<=s2[0][2])
	{	if(s1[i][0]==s2[i][0])
			{
				if(s1[i][1]==s2[j][1])
				{
					s3[k][2]=s1[i][2]+s2[j][2];
					s3[k][1]=s1[i][1];
					s3[k][0]=s1[i][0];
					k++;i++;j++;

				}
				else if(s1[i][1]>s2[j][1])
				{
					s3[k][0]=s2[j][0];
					s3[k][1]=s2[j][1];
					s3[k][2]=s2[j][2];
					k++;j++;
				}
				else
				{
					s3[k][0]=s1[i][0];
					s3[k][1]=s1[i][1];
					s3[k][2]=s1[i][2];
					k++;i++;
				}
			}
		else if(s1[i][0]<s2[j][0])
		{

			s3[k][0]=s1[i][0];
			s3[k][1]=s1[i][1];
			s3[k][2]=s1[i][2];
			k++;i++;
		}
		else
		{
			s3[k][0]=s2[j][0];
			s3[k][1]=s2[j][1];
			s3[k][2]=s2[j][2];
			k++;j++;
		}
		}
	}

	while(i<=s1[0][2])
	{
		s3[k][0]=s1[i][0];
		s3[k][1]=s1[i][1];
		s3[k][2]=s1[i][2];
		i++;k++;
	}
	while(j<=s2[0][2])
	{
		s3[k][0]=s2[j][0];
		s3[k][1]=s1[j][1];
		s3[k][2]=s1[j][2];
		j++;k++;
	}
	s3[0][2]=k-1;
	for(i=0;i<=s3[0][2];i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"  "<<s3[i][j];
			}
			cout<<endl;
		}

}
int main()
{
	
sparse S;
    S.add();
    S.transpose();
return 0;
}
