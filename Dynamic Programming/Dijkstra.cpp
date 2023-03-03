#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj[100];
vector<int> vis[100];
vector<int> dis[100];


void dijkstra(int source){
	set<pair<int, int>> st;
	st.insert({0,source});
	dis[source] = 0;

	while(st.size()>0){
		auto node = *st.begin(); //minimum element of set
		int v = node.second;
		int dis_v = node.first;
		st.erase(st.begin());
		vis[v] = 1;

		for(auto child: adj[v]){
			int child_v = child.first;
			int w = child.second;

			if(dis[child_v]>dis[v]+w){
				dis[child_v] = dis[v]+w;
				st.insert({dis[child_v], child_v});
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

	int n,edge,source,u,v,w;
	cin>>n>>edge;

	for(int i=0;i<edge;i++){
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
	}	
	cin>>source;
	
	dijkstra(source);

	return 0;
} 