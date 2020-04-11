#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main ()
{
 ifstream fin;
 ofstream fout;
 fin.open("read.txt");
vector<int> vi;
int value;

while(fin >> value) // As long as the stream is ok (this includes eof)
{
  vi.push_back(value);
}
fin.close();
fout.open("read.txt");


   int i, j, first, temp;
      int numLength = vi.size();
      for (i= numLength - 1; i > 0; i--)
     {
           first = 0;                 // initialize to subscript of first element
           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
          {
                 if (vi[j] > vi[first])
                 first = j;
          }
         temp = vi[first];   // Swap smallest found with element in position i.
         vi[first] = vi[i];
         vi[i] = temp;
     }

for(int i = 0 ; i<vi.size();i++)
{
	fout<<vi[i]<<" ";

}
fout.close();

return 0;
}
