#include <bits/stdc++.h>
using namespace std;

void graph_input(int &N, int &E){
	int u,v;
	int adj[N][N];

	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			adj[i][j]=0;
		}
	}

	for(int i=1;i<=E;i++){
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}


	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cout<<"\t"<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}
}



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N,E;
	cin>>N>>E;
	int adj[N][N];

	graph_input(N, E);
	//print_graph(N, E);

	return 0;
} 
/*
Input:

5 4
1 4
2 3
2 4
1 5
*/