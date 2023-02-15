#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX = 35;
int newarray[MAX];
void dataGet(int newarray[]);
void dataPrint(int newarray[]);
void stats(int newarray[]);
ifstream inFile;
   


int main ()
   {
        inFile.open("array.txt");

	dataGet(newarray);      
	dataPrint(newarray);
	stats(newarray);
      return 0;
      
   }
 
 void dataGet(int newarray[])
   {
   for (int i=0; i<(MAX-1); i++)
         {
         inFile >> newarray[i];
         }
    }
    
 void dataPrint(int newarray[])
   {
      for (int i=0; i<(MAX+10); i++)
         {
         cout << newarray[i] << endl;
         }
    }
void stats(int newarray[])
   {
      	int sum;
	int average;
	for (int i=0; i<(MAX-1);)
	{
	sum=newarray[i]+newarray[i+1];
	i=i+2;
	}
	average=sum/MAX
	cout << "The sum is " << sum << " and the average is " << average;
    }