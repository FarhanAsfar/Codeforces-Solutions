#include <bits/stdc++.h>
using namespace std;

int d[100];

struct edge{
	int u,v,w;
}temp;

edge edgelist[100];

void Bell(int n, int nedge, int source, edge edgelist[]){
	for(int i=0;i<n;i++){
		d[i]=99999;
	}
	d[source] = 0;

	for(int i=0;i<n-1;i++){
		for(int j=0;j<nedge;j++){
			//temp = edgelist[j];
			int u = edgelist[j].u;
			int v = edgelist[j].v;
			int w = edgelist[j].w;

			if(d[v]>d[u]+w){
				d[v] = d[u] + w;
			}
		}
	}
	for(int j=0;j<nedge;j++){
		//temp = edgelist[j];
		int u = edgelist[j].u;
		int v = edgelist[j].v;
		int w = edgelist[j].w;

		if(d[v]>d[u]+w){
			cout<<"negative cycle\n";
			return ;
		}
	}
	//return true;
	for(int i=1;i<=n;i++){
		cout<<"\n"<<i<<"\t"<<d[i];
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//memset(d, -1, sizeof(d));
	int n,nedge,a,b,c,source;
	cin>>n>>nedge;

	for(int i=0;i<nedge;i++){
		//cin>>a>>b>>c;
		cin>>edgelist[i].u;
		cin>>edgelist[i].v;
		cin>>edgelist[i].w;
	}
	cin>>source;

	Bell(n, nedge, source, edgelist);

	return 0;
} 