#include <iostream>
#include <vector>
using namespace std;

    /*
    undirected graph is type of graph in which the edges have no direction
    that means, if two node/vertex is A and B, can move from A to B and B to A
    the connection is bidirectional

    This type of graph can be initialized with a trick:
    if a is connected to b, then b is also connected to a.
    So, initialize both a’s and b’s edges at the same time.
    */

int main(){
    int node, edge;

    cout << "Write the amount of nodes and edges: ";
    cin >> node >> edge;

    vector<vector<int>> graph(node, vector<int>(edge));

    int n1, n2, cost;

    for(int i=0; i<edge; i++){
        cin >> n1 >> n2 >> cost;
        
        graph[n1][n2] = cost;
        graph[n2][n1] = cost;
    }

    

    return 0;
}