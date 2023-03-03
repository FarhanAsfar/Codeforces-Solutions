#include <bits/stdc++.h>
using namespace std;

std::vector<int> adj[100];
int color[100], pre[100], discover[100], finish[100];

int Time = 0;

void dfs(int source){
	Time+=1;
	discover[source]=Time;
	color[source]=1;

	for(int i=0;i<adj[source].size();i++){
		int next_node = adj[source][i];

		if(color[next_node]==0){
			cout<<source<<"-"<<next_node<<": Tree edge"<<"\n";
			pre[next_node]=source;
			dfs(next_node);
		}
		else if(color[next_node]==1){
			cout<<source<<"-"<<next_node<<": Back edge -- cycle detected"<<"\n";
		}
		else{
			if(discover[source]>discover[next_node]){
				cout<<source<<"-"<<next_node<<": Cross edge"<<"\n";
			}
			else{
				cout<<source<<"-"<<next_node<<": Forward edge"<<"\n";
			}
		}
	}
	Time+=1;
	finish[source]=Time;
	color[source]=2;
}



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int node,edge,u,v,source;
	cin>>node>>edge;

	for(int i=0;i<edge;i++){
		cin>>u>>v;

		adj[u].push_back(v);
		//adj[v].push_back(u); //remove this line for directed graph.
	}
	for(int i=0;i<node;i++){
		color[i]=0;
		pre[i]=-1;
		discover[i]=99999;
		finish[i]=99999;
	}
	cin>>source;
	dfs(source);

	cout<<"\n";
	for(int i=1;i<=node;i++){
		cout<<discover[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<=node;i++){
		cout<<finish[i]<<" ";
	}


	return 0;
} 