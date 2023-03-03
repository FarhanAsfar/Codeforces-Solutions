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

	vector<int> adj[n+1];

	for(int i=0;i<edge;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i=1;i<=n;i++){ 
		cout<<i<<"--> ";
		for(int j=0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	
	int x,y; 
	cin>>x>>y;
	cout<<"Degree of Vertex "<<x<<": "<<adj[x].size()<<"\n"; //degree of vertex x

	bool connected = false;
	for(int i=0;i<adj[x].size();i++){
		if(adj[x][i]==y){
			connected = true;
			break;
		}
	}
	if(connected==true){
		cout<<"Vertices "<<x<<" and "<<y<<" are connected"<<"\n";
	}
	else{
		cout<<"Vertices "<<x<<" and "<<y<<" are not connected"<<"\n";
	}	

	return 0;
} 
/*
Input
------
8 7

2 8
1 2
1 3
1 7
1 8
3 4
7 6

1 6
*/
