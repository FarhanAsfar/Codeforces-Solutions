#include <bits/stdc++.h>
using namespace std;

std::vector<int> adj[100];
int color[100], dist[100], prevN[100];

void bfs(int source){
	queue<int> q;

	color[source]=1;
	dist[source]=0;
	prevN[source]=-1;

	q.push(source);	 

	while(!q.empty()){
		int cur_node = q.front();
		q.pop();

		for(int i=0;i<adj[cur_node].size();i++){
			int next_node = adj[cur_node][i];

			if(color[next_node]==0){

				color[next_node]=1;
				dist[next_node]= dist[cur_node]+1;
				prevN[next_node]=cur_node;

				q.push(next_node);
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


	int node,edge,u,v;
	cin>>node>>edge;

	for(int i=0;i<edge;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int source,x;
	cin>>source>>x;

	bfs(source);

	/*cout<<"Distance from source node "<<source<<" :"<<"\n";

	for(int i=1;i<=node;i++){
		cout<<"Distance of node "<<i<<" is: "<<dist[i]<<"\n";
	}*/

	int m=0;
	if(prevN[x]==-1){
        cout<<"No Path exist"<<endl;
	}
	else{
		std::vector<int> path; //to store the path
        while(x!=-1){
        	path.push_back(x);
            x = prevN[x];
        }
        reverse(path.begin(), path.end());

        cout<<path.size()-1<<"\n"; //level

        for(int i=0;i<path.size();i++){
        	cout<<path[i]<<" ";
        }
	}

	return 0;
} 