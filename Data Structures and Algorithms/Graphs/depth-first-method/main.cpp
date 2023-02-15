#include <iostream>
#include <stdio.h>

using namespace std;

const int SIZE = 5;
int weights[SIZE][SIZE];
bool visited[SIZE];

void
initializeW ()
{
  for (int i = 0; i < SIZE; i++)
    {
      for (int j = 0; j < SIZE; j++)
	{
	  weights[i][j] = 10000000;
	}
    }
}

void
dft (int index)
{
  visited[index] = true;

  cout << index << " ";

  for (int i = 0; i < SIZE; i++)
    {
      if (weights[index][i] != 1000000)
	{
	  if (!visited[i])
	    {
	      dft (i);
	    }
	}
    }
}


int
main ()
{
  cout << "Depth first method" << endl;
  initializeW ();
  weights[0][1] = 16;
  weights[0][4] = 3;
  weights[0][3] = 2;

  weights[1][2] = 5;

  weights[2][1] = 3;

  weights[3][1] = 12;
  weights[3][4] = 7;
  weights[3][4] = 7;

  weights[4][3] = 5;
  weights[4][1] = 10;
  weights[4][2] = 4;
  
  for (int i = 0; i < SIZE; i++){
        visited[i] = false;
    }
  for (int i = 0; i < SIZE; i++){
        if (!visited[i]){
            visited[i] = true;
            dft (i);
        }
    }



  return 0;
}

