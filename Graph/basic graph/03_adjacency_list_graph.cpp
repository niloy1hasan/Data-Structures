#include <iostream>
#include <vector>
using namespace std;

#define MAX 10000


int main(){
    vector<int> edge[MAX]; //2d array with non initialized fixed column
    vector<int> cost[MAX];

    int nodeAmount, edgeAmount;
    cin >> nodeAmount >> edgeAmount;
    int n1, n2;
    for(int i=0; i<edgeAmount; i++){
        cin >> n1 >> n2;
        edge[n1].push_back(n2);
        edge[n2].push_back(n1);
        cost[n1].push_back(1);
        cost[n2].push_back(1);
    }

    return 0;
}