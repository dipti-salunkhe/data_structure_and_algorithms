//============================================================================
// Name        : 240_job.cpp
// Author      : dipti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct qnode
{
	string job;
	qnode *next;

};
class q
{
	qnode *front,*rear;
public:
	q()
{front=rear=NULL;}

	void add_job(string);
	string rem_job();
	int emptyq();
};
int q::emptyq()
{
	if(front==NULL && rear==NULL)
		return 1;
	else
		return 0;
}
void q::add_job(string jname)
{
	qnode *nn;
	nn= new qnode;
	nn->job=jname;
	nn->next=NULL;
	if(emptyq())
	{
		front=rear=nn;
	}
	else
	{
		rear->next=nn;
		rear=nn;
	}
}
string q:: rem_job()
{
	string data;
	data=front->job;
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
		front=front->next;
	return data;
}

int main()
{

q p;

p.add_job("j2");
p.add_job("j1");
p.add_job("j3");
string data;
data=p.rem_job();
cout<<data;
data=p.rem_job();
cout<<data;
data=p.rem_job();
cout<<data;
	return 0;
}
