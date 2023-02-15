#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX = 29;

void ReadData(int array[], int LOOP, ifstream &indata);
void PrintData(int array[], int LOOP, ofstream &outdata);
void CopyArray(const int array[], int copyArray[], int LOOP);
void SearchArray(int array[], int LOOP);

int main()
   {
      int myArray[MAX];
      ifstream indata;
      ofstream outdata;
      indata.open("arrayin.txt");
      outdata.open("outdata.txt");
      ReadData(myArray, MAX, indata);
      PrintData(myArray, MAX, outdata);
      SearchArray(myArray, MAX); // odd place for new variable but ..
      int copyArray[MAX];
      CopyArray(myArray, copyArray, MAX)
      cout << "this works!" << endl;
      indata.close();
      outdata.close();
      return 0;
   }
   
void ReadData(int array[], int LOOP, ifstream &indata)
   {
   int i = 0;
   for (i = 0; i < LOOP; i++)
      {
      indata >> array[i];
      cout << array[i] << endl;
      }
   }
   
void PrintData(int array[], int LOOP, ofstream &outdata)
   {
   int i = 0;
   for (i = 0; i < LOOP; i++)
      {
      outdata << array[i] << endl;
      cout << array[i] << endl;
      }
   }
void SearchArray(int array[], int LOOP)
   {
   int num;
   int i = 0;
   cout << "what number shall we find?" << endl;
   cin >> num;//prompt user for value to find
   for (i = 0; i < LOOP; i++)
   {
      if (array[i] == num)
      {
         cout << array[i];
         i = i + LOOP;
      }//find the value and print value out - or if not found print approrpiate comment
      if (i = (LOOP - 1) )
      {
         cout << "number not found" << endl;
      }
   }

   
void CopyArray(const int array[], int copyArray[], int LOOP)
   {
   int i = 0;
   for (i = 0; i < LOOP; i++)
      {
         CopyArray[i] = array[i];
      }//use the array[] which is full and copy each element of that array into copyArray[]
   }
