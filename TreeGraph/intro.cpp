#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int graph[N][N];

vector<pair<int,int>> graph2[N];

int main(){
    int n,m;
    cin>>n>>m;
 
    for(int i=0;i<m;i++){
        int v1,v2,wt;
        cin>>v1>>v2;
        graph[v1][v2]=wt;
        graph[v2][v1]=wt;

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
    //Adjacency Matrix.....
    //O(N^2) -space complexity
    //N!=10^5 n<=10^3

    //Adjacency List.... 
    //O(N+M)

}
