#include <iostream>
#include <fstream>
#include <vector>
#include<cstring>
using namespace std;

int main ()
{
 ifstream fin;
 ofstream fout;
 fin.open("read.txt");

string value;
int cnt=0,flag=0;
while(fin >> value) // As long as the stream is ok (this includes eof)
{
  for(int i=0;i<value.length();i++)
  {
      if(value[i]=='@')
        cnt++;
      if(value[i]=='.')
      {

          if(value[i+1]=='c' && value[i+2]=='o' && value[i+3]=='m')
            flag=1;
      }


  }
  fin.close();
  if(flag==1 && cnt==1)
  {

      fout.open("read.txt");
      fout<<value<<endl;
  }
  else{
    fout<<"ERROR"<<endl;
  }

}

fout.close();

return 0;
}
