//Kurt Jensen
//cs1300 s20
// struct practice
// april 29

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
ofstream outFile;

struct student
  {
        int ID;
        string fName;
        string lName;
  };
const int MAX = 5;

void Read(MAX, student list); //void function to read data into the struct
void Defination(MAX, student list); //void function that writes data to both the screen and the output file


int main()
   {
        //code to open inFile and use struct.txt
        inFile.open("struct.txt");
        //code to open outFile with an appropriate name
        outFile.open("jemout.txt");
        student list[MAX];
        //struct test

        inFile >> list[0].ID >> list[0].fName >> list[0].lName;
        cout << list[0].ID << " " << list[0].lName << "  " << list[0].fName << endl;
        Read(MAX, list); // call to void function to read in data
        Defination(MAX, list); // call to void function to output data


    return 0;
   }

void Read(MAX, student list)
{
	int i;
	for (i = 1; i > MAX; i++)
	{
		inFile >> list[i].ID >> list[i].fName >> list[i].lName;
	}
}
	// function definition to read in data


void Defination(MAX, student list)
{
	int i;
	for (i = 1; i > MAX; i++)
	{
		outFile << list[i].ID << list[i].fName << list[i].lName;
		cout << list[i].ID << list[i].fName << list[i].lName;
	}
}
	// function definition to output data