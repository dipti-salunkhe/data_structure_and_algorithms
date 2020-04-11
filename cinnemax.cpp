#include<iostream>
#include<cstring>
using namespace std;
struct node
{
   string d1,d2;
   node *next;
   node *prev;
    
};
static int count ;
class DCLL
{
   node *header[10];
    string flag;
   public:
   DCLL()
    {
       int i;
      for(i=0;i<10;i++)
      header[i]=NULL;
        flag="yes";
    }
    void initialize();
    void book();
    void display();
    void display_complete();
    int check();
    void cancel();

};
void DCLL::cancel()
{
int row,seat;
string name;
    cout<<"\n Enter your name : ";
    cin>>name;
    cout<<"\n Enter Row & seat no U have booked";
    cout<<"\n Row : ";
cin>>row;
    row--;
    cout<<"\n Seat : ";
    cin>>seat;
    
node *temp;
    int i;
    temp=header[row];
    for(i=0;i<seat-1;i++)
    temp=temp->next;
    if(temp->d1=="     ")
    {
    temp->d1="_ _  ";
        cout<<"\n Booking cancelled..!";
        }
        else
        cout<<"\n Seat not booked yet..!";
    
}
int DCLL::check()
{
if(flag=="no")
    return 0;
else
return 1;
}
void DCLL::initialize()
{
  int row,i=0;
    for(row=0;row<10;row++)
{
    i=0;
while(i<7)
    {
    node *nn=new node;
    nn->d1="_ _  ";
        cout<<nn->d1;
        i++;
    if(header[row]==NULL)
    {
        header[row]=nn;
        nn->prev=nn;
nn->next=nn;     
}
else{
         nn->next=header[row];
    nn->prev=header[row]->prev;
    header[row]->prev->next=nn;
        header[row]->prev=nn;
}//else
}//while
    cout<<endl<<endl;
}//for
    }

void DCLL::book()
{
    int row,i,seat;
    node *temp;
    do{
cout<<"\n Enter row ";
cin>>row;
        if(row>10)
        cout<<"\n only 10 rows available....! ";
        }
  while(row>=10);
    row--;
    do{
    cout<<"\n Enter seat no :";
    cin>>seat;
        if(seat>7)
        cout<<"\n Only 7 seats are available...!";
        }
        while(seat<8);
    temp=header[row];
   for(i=0;i<seat-1;i++)
    temp=temp->next;
   if(temp->d1=="     ")
  {  cout<<"\nSeat not available\n";
        flag="no";  }
    else{
    temp->d1="     ";
        cout<<"\n Enter name : ";
        cin>>temp->d2;
        cout<<temp->d2<<" , Your Seat booked succesfully..!\n";
        flag="yes";
        }
}
void DCLL::display()
{
node* temp;
    int i,j;
    for(i=0;i<10;i++)
{
    temp=header[i];
    for(j=0;j<7;j++)
        {
            cout<<temp->d1;
        temp=temp->next;
 
    }//for
        cout<<endl;
      
}//for
        
}//display

int main()
{
    DCLL d;
    int n,i,b,ch;
    cout<<"\n--------CINNEMAX--------\n";
    cout<<"\n...Welcome to ticket booking system...\n";
    cout<<"\n 10 rows ,each containing 7 seats are available..";
    for(i=0;i<7;i++)
    
    cout<<"c-"<<i<<"  ";
    cout<<endl<<endl;
  
    d.initialize();
    while(1)
    {
    cout<<"\n 1.Book\n 2.Display\n 3.Cancel Booking ";
    cout<<"\n\n   CHOICE : ";
    cin>>ch;
    switch(ch){
    case 1:cout<<" Enter no of customers: ";
    cin>>n;
  for(i=0;i<n;i++)
    { if(!d.check())
       i--;
        else 
        {
    d.book(); 
        }
            }
        break;
    case 2:d.display();break;
        case 3:d.cancel();break;
    default : 
        return 0;
            }
}
   
}
/*void DCLL :: display()
{
    node *temp;
    int i;
    for(i=0;i<10;i++)
    {
    temp=header[i];
    do
    {
        if(header[i]==NULL)
      {
     cout<<"\n Row "<<i<<" is empty ";}
            else{
     cout<<"\nData in row "<<i<<" : ";
     cout<<"  "<<temp->data;
     temp=temp->next;
                }
    }while(temp!=header[i]);
 }
}*/

/*void DCLL::display_complete()
{
    
}*/
//int DCLL ::count;
/*void DCLL :: book()
{
   node *nn;
   nn=new node;
 int row,seat;
   cout<<"\n Enter  row no  : ";
    cin>>row;
cout<<"\n Enter seat no. ";
cin>>seat;
    cout<<"\n Enter data  : ";
   cin>>nn->data;
   nn->next=nn->prev=NULL;
   node *temp;
   temp=header[row];
   if(header[row]==NULL)
    {
        header[row]=nn;
        nn->next=nn;
        nn->prev=nn;
    }
   else
   {*/
        /* in dcll we dont need to traverse till end of list to add new members .As address of last is in previous of header.
        which can be changed while adding 
        */
   /* nn->prev=header[row]->prev;
    nn->next=header[row];
    header[row]->prev->next=nn;
    header[row]->prev=nn;
    
   }
        
}*/