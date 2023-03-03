#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
queue<int>q;
int color[100], dis[100], p[100];

void initialize(int n, int source){
	for(int i=0;i<n;i++){
		color[i]=0;
		dis[i]=99999;
		p[i]=-1;
	}

	while(!q.empty())
		q.pop();

	color[source]=1;
	dis[source]=0;
	q.push(source);
}

void bfs(){
	while(!q.empty()){
		int u = q.front();
		q.pop();

		for(int i=0;i<adj[u].size();i++){
			int v = adj[u][i] ;
			if(color[v]==0){
				color[v]=1;
				dis[v]=dis[u]+1;
				p[v]=u;
				q.push(v);
			}
		}
		color[u]=2;
	}
}

void printPath(int source, int dist){
	if(source=dist){
		cout<<source<<"\n";
		return ;
	}
	if(dist==-1){
		cout<<"no path"<<"\n";
		return ;
	}
	printPath(source, p[dist]);
	cout<<dist<<" ";
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,edge,u,v,source;
	cin>>n>>edge;

	for(int i=0;i<edge;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int j=0;j<n;j++){
		initialize(n,j);
		bfs();
		for(int i=0;i<n;i++){
			if(j!=i){
				printPath(j,i);
				cout<<"cost: "<<dis[i]<<" ";
			}
		}
		cout<<"\n";
	}

	return 0;
} 