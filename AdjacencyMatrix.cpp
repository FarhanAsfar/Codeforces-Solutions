#include <bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,edge,u,v;
	cin>>n>>edge;

	int adj[n][n];

	//memset(adj, 0, sizeof(adj));

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			adj[i][j]=0;
		}
	}

	for(int i=1;i<=edge;i++){
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"\t"<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}

	int x,y;
	cin>>x>>y;
	for(int i=0;i<edge;i++){
		if(adj[x][y]==1){
			cout<<"Vertices "<<x<<" and "<<y<<" are connected"<<"\n";
		}
		else{
			cout<<"Vertices "<<x<<" and "<<y<<" are not connected"<<"\n";
		}
		break;
	}
	
	for(int x=1;x<=n;x++){
		int degree=0;
		for(int i=1;i<=n;i++){
			if(adj[x][i]==1){
				degree++;
			}
		}
		cout<<"Degree of "<<x<<" vertex is: "<<degree<<"\n";
	}
	
	return 0;
} 
/*
Input:
6 8

1 2
1 4
2 4
2 5
3 5
4 5
3 6
6 6

6 6
*/