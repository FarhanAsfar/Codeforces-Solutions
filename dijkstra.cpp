#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>adj[100];
int dist[100], par[100];


void dijkstra(){
	priority_queue<pair<int,int>,
	vector<pair<int,int>>,greater<pair<int,int>>>pq;

	while(!pq.empty()){
		auto it = pq.top();
		int node = it.second;
		int dis = it.first;
		pq.pop();

		for(auto it : adj[node]){
			int adjNode = it.first;
			int edN = it.second;
			if(dis+edN<dist[adjNode]){
				dist[adjNode] = dis+edN;
				pq.push({dis+edN, adjNode});
				par[adjNode] = node;
			}
		}
	}

}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, edge;
	cin>>n>>edge;

	for(int i=0;i<edge;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}
	int source=0, dest=n;
	dist[source]=0;
	for(int i=0;i<n;i++){
		par[i]=i;
	}

	dijkstra();

	vector<int>path;
	int node = n;
    while(par[node]!= node){
        path.push_back(node);
        dest = par[node];
    }
    path.push_back(0);

    reverse(path.begin(), path.end());

    for(int i=0; i<path.size(); i++)
    {
        cout<<path[i]<<" ";
    }

	return 0;
} 