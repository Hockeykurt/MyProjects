
#include <iostream>

using namespace std;

const int SIZE = 6;
int weights[SIZE][SIZE];

bool V[SIZE];

struct edge_item{
    int start;
    int end;
};

edge_item E[SIZE*SIZE];

void initializeW_V()
{
  for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
	        weights[i][j] = 1000000;
	    }
	    V[i]=false;
    }
}

void find_MST(int source){
    int eco=0;
    V[source]=true;
    for(int i=0; i<SIZE; i++){
        int minW=1000000;
        int endV;
        edge_item edge;
        for(int j=0; j<SIZE; j++){
            if(V[j]){
                for (int k=0; k<SIZE; k++){
                    if(V[k]==false && weights[j][k]<minW){
                        endV=k;
                        edge.start = j;
                        edge.end=k;
                        minW=weights[j][k];
                    }
                }
            }
        }
        V[endV]=true;
        E[eco].start=edge.start;
        E[eco].end=edge.end;
        eco++;
    }
    cout <<"Optimal edges in the spanning tree is: "<<endl;
    for(int i=0; i<eco; i++){
        cout << E[i].start<<" "<<E[i].end<<endl;
    }
}


main ()
{
    initializeW_V();

/*
    weights[0][1]=6;
    weights[1][0]=6;
      
    weights[0][2]=5;
    weights[2][0]=5;
  
    weights[0][3]=2;
    weights[3][0]=2;
    
    weights[1][6]=4;
    weights[6][1]=4;
    
    weights[1][4]=2;
    weights[4][1]=2;
    
    weights[2][5]=7;
    weights[5][2]=7;
    
    weights[2][6]=5;
    weights[6][2]=5;
    
    weights[3][4]=8;
    weights[4][3]=8;

    weights[4][5]=10;
    weights[5][4]=10;
*/
    weights[0][1]=3;
    weights[0][3]=4;
    weights[0][2]=15;
    
    weights[2][4]=2;
    
    weights[4][2]=3;
    weights[4][5]=8;
    
    weights[5][3]=7;

    find_MST(0);
    
    
    return 0;
}
