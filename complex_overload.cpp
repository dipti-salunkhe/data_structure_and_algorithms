//============================================================================
// Name        : assign_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class complex
{int real;
int img;
public:
complex()
{
   real=0;
   img=0;

}
complex(int x, int y)
{
   real=x;
   img=y;
}
complex operator+(complex &c)
{
   complex temp;
   temp.real=this->real +c.real;
   temp.img=this->img + c.img;
   return temp;
}
//(ac-bd)+(ac)
complex operator*(complex &c)
{  complex temp;
  temp.real=(real * c.real)-  ( img* c.img);
  temp.img=(real* c.img)+(c.real *img);
  return temp;

}
complex operator/(complex &c)
 {  complex x;
 x.real=(real*c.real + img* c.img) /(c.real*c.real + c.img *c.img);
 x.img=(img*c.real-real*c.img)/(c.real*c.real + c.img *c.img);
 return x;

}
friend istream & operator>>(istream &, complex &);
friend ostream & operator<<(ostream &  , complex&);

};
istream & operator>>(istream & indiain , complex &c)
{
	indiain>>c.real>>c.img;
	return (indiain);
}
ostream & operator<<(ostream & indiaout , complex &c)
{
	indiaout<<c.real<<"+"<<c.img<<"i"<<endl;
	return (indiaout);
}


int main()
{ complex c1;
complex c2(9,7);
complex c3,c5,c6,c7;
cout<<"\n enter complex number  real and img part\n";
cin>>c3;
cout<<"\n enter complex number  real and img part\n";
cin>>c5;
c6=c3*c5;
c7=c3/c5;
complex c4;
c4=c2+c3;
cout<<c1;
cout<<c2;
cout<<c3;
cout<<c4;
cout<<c6;

	return 0;
}
