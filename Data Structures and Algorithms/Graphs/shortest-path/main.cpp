
#include <iostream>

using namespace std;

const int SIZE=6;
int weights[SIZE][SIZE];
int smallestWeight[SIZE];

void initializeW(){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            weights[i][j]=10000000;
        }
    }
}

void FindShortestPath(int u){
    bool weightsfound[SIZE];
    for(int i=0;i<SIZE;i++){
        smallestWeight[i]=weights[u][i];
        weightsfound[i]=false;
    }
    weightsfound[u]=true;
    smallestWeight[u]=0;
    for(int i=0;i<SIZE-1;i++){
        double minW=10000000;
        int v;
        for(int j=0; j<SIZE-1; j++){
            if(!weightsfound[j]){
                if(smallestWeight[j]<minW){
                    v=j;
                    minW=smallestWeight[v];
                }
            }
        }
        weightsfound[v]=true;
        for(int j=0;j<SIZE-1; j++){
            if(!weightsfound[j]){
                if(minW+weights[v][j]<smallestWeight[j]){
                    smallestWeight[j]=minW+weights[v][j];
                }
            }
        }
    }
}

void printSmallestW(){
    cout << "Smallest weights: ";
    for(int i=0; i<SIZE; i++) {
        cout << smallestWeight[i] << " ";
    }
    cout << "\n";
}


int main()
{
    cout << "Shortest path algorithm" << endl;;
    initializeW();
    /*
    weights[0][1]=16;
    weights[0][4]=3;
    weights[0][3]=2;
    
    weights[1][2]=5;
    
    weights[2][1]=3;
    
    weights[3][1]=12;
    weights[3][4]=7;
    weights[3][4]=7;
    
    weights[4][3]=5;
    weights[4][1]=10;
    weights[4][2]=4;*/
    
    weights[0][1]=3;
    weights[0][3]=4;
    weights[0][2]=15;
    
    weights[2][4]=2;
    
    weights[4][2]=3;
    weights[4][5]=8;
    
    weights[5][3]=7;
    
    
    FindShortestPath(0);
    printSmallestW();
    return 0;
}







