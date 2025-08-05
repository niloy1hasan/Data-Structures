#include <iostream>
#include <vector>
using namespace std;

#define MAX 10000

int main(){
    vector<int> edge[MAX];
    vector<int> cost[MAX];

    int nodeAmount, edgeAmount;
    cin >> nodeAmount >> edgeAmount;

    vector<vector<int>> degreeCount(nodeAmount, vector<int>(2)); // 0-outdegree   1-indegree

    int n1, n2, c;

    for(int i=0; i<edgeAmount; i++){
        cin >> n1 >> n2 >> c;
        
        edge[n1].push_back(n2);
        cost[n1].push_back(c);
    }

    for(int i=0; i<nodeAmount; i++){
        degreeCount[i][0] = edge[i].size();
        for(int j=0; j<edge[i].size(); j++){
            degreeCount[edge[i][j]][1]++;
        }
    }



    cout << "OutDegree and InDegree Amount:\n";

    for(int i=0; i<nodeAmount; i++){
        cout << "node " << i+1 << " -> " << "outdegree : " << degreeCount[i][0] << " ; indegree : " << degreeCount[i][1] << "\n"; 
    }

    return 0;
}