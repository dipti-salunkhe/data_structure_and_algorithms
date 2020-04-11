#include<iostream>
using namespace std;
struct node
{
int rn;
node *nxt;
};
 int cnt=0;
class ll
{
    node *header;
   
    public:
    void new_president();
    void new_secretory();
    void add_members();      
    void add_position();      
    void remove_members();
    void reverse(node* flag);
    void count();
    void display();
    void rev();
   ll()
{
    header=NULL;
}
    ~ll()
    {
    cout<<"\n\n Deallocation of memory ..";
}
    };
//***************************
void ll :: add_members()
{
    node *nn;
    //char yn;
    nn=new node;
    cout<<"enter value";
    cin>>nn->rn;

    node *temp;
    temp=header;
   /* if(header==NULL)
    {
    header=nn;
}
    else
    {*/
    while(temp->nxt->nxt!=NULL)
        {
            temp=temp->nxt;
        }
    nn->nxt=temp->nxt;
        temp->nxt=nn;
//}
    }
//***************************
    
void ll :: display()
{
node *temp;
temp=header;
while(temp!=NULL)
    {
        
        cout<<temp->rn<<"--->";
        temp=temp->nxt;     
}
}
//*****************************
    
void ll:: new_president()
    {
    node *nn;
        nn=new node;
        cout<<"\n Enter roll no of  for president : ";
        cin>>nn->rn;
        nn->nxt=header;
        header=nn; 
}
//****************************

void ll :: add_position()
{
    node *nn;
    nn=new node;
    node *temp;
    temp=header;
int n,i;
cout<<"\n Enter positio to insert node : ";
    cin>>n;
cout<<"\nEntr value : ";
cin>>nn->rn;
for(i=1;i<n-1;i++)
{
   temp=temp->nxt;
}
    nn->nxt=temp->nxt;
temp->nxt=nn;
}
//****************************
void ll:: new_secretory()
{
    node *temp;
    temp=header;
    node *nn;
    nn = new node;
    cout<<"\n enter roll no of for secretory   : ";
    cin>>nn->rn;
nn->nxt=NULL;
    while(temp->nxt!=NULL)
    {
temp=temp->nxt;
}
    temp->nxt=nn;
}
//****************************
    void ll::remove_members()
{
   int n,i;
   node *temp;
   temp=header;
   cout<<"\n Enter which node to          be deleted :";
   cin>>n;
    for(i=1;i<n-1;i++)
    {
temp=temp->nxt;
}
    temp->nxt=temp->nxt->nxt;
}
//*****************************
void ll::rev()
{
reverse(header);
}
void ll::reverse(node *flag)
{
     
  //  count();
    int i;
   // node *flag;
    flag=header;
    if(flag==NULL)
    return ;
    else 
{
        reverse(flag->nxt);
       cout<<flag->rn<<"\t";
}
    
/*for(i=1;i<cnt;i++)
    {
flag=flag->nxt;
}
    cout<<flag->rn;
    cnt--;
if(cnt>0)
  { reverse();  } */
    
}
//**************************
    void ll::count()
{
node *temp;
temp=header;
    while(temp!=NULL)
    {
        cnt++;
    temp=temp->nxt;
        
}
cout<<cnt;
}
int main()
{
    ll L;
        char yn;
    int n;
    L.new_president();
    L.new_secretory();
    cout<<" 1.Change President\n 2.Add members\n 3.Display\n 4.Change Secretory\n 5.Add members at position\n 6.remove\n 7.reverse\n 8.count";
    
  do{
            cout<<"\n which operation : ";
            cin>>n;
           switch(n)
  {
  case 1:L.new_president();break; 
             
            
  case 2:L.add_members();break;
             
  case 3: L.display();break;
            
  case 4:L.new_secretory(); break;
             
  case 5:L.add_position();break; 
  case 6:L.remove_members();
               break;
  case 7: L.rev();break;
  case 8:L.count();break;
}
    
 
        }while(n<=8 && n>0);
   // mla m;
  //  cin>>m.name;
  //  cin>>m.age;
  //  cout<<m.name<<m.age;
return 0;
}