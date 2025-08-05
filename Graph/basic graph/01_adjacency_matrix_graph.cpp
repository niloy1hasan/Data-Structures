#include <iostream>
#include <vector>
using namespace std;

/*
graph created by 2d array, this type 2d array graph called adjacency matrix
*/

int main(){

    vector<vector<int>> graph(100, vector<int>(100));
    int nodeAmount;
    cout << "Write the amount of vertex/node: ";
    cin >> nodeAmount;

    for(int i=0; i<nodeAmount; i++) {
        for(int j=0; j<nodeAmount; j++){
            cin >> graph[i][j];
        }
    }
    

    return 0;
}