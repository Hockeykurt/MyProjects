#include <iostream> 
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream inData;

int main() 
{    
    int num;
    int hash;
    inData.open("line.txt");

    string line, line2, line3, line4;
    getline(inData,line);
    cout << line << endl;
    for(int i=0; i<line.length();)
    {
        num=line[i]+line[i+1];
        i=i+2;
    }
    hash=num%13;
    cout << "Sum = " << num << endl;
    cout << "Hash = " << hash << endl;

    getline(inData,line2);
    cout << line2 << endl;
    for(int i=0; i<line2.length();)
    {
        num=line2[i]+line2[i+1];
        i=i+2;
    }
    hash=num%13;
    cout << "Sum = " << num << endl;
    cout << "Hash = " << hash << endl;
	
    getline(inData,line3);
    cout << line3 << endl;
    for(int i=0; i<line3.length();)
    {
        num=line3[i]+line3[i+1];
        i=i+2;
    }
    hash=num%13;
    cout << "Sum = " << num << endl;
    cout << "Hash = " << hash << endl;

    getline(inData,line4);
    cout << line4 << endl;
    for(int i=0; i<line4.length();)
    {
        num=line4[i]+line4[i+1];
        i=i+2;
    }
    hash=num%13;
    cout << "Sum = " << num << endl;
    cout << "Hash = " << hash << endl;
    
    return 0;
}