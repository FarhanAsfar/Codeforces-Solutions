#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int color[100], dis[100], pre[100];

void bfs(int source, int n){
  for(int i=0;i<n;i++){
    color[i]=0;
    pre[i]=-1;
    dis[i]=99999;
  }

  color[source]=1;
  pre[source]=-1;
  dis[source]=0;

  queue<int>q;
  q.push(source);

  while(!q.empty()){
    int node = q.front();
    q.pop();

    for(int i=0;i<adj[node].size();i++){
      int nbr = adj[node][i];

      if(color[nbr]==0){
        color[nbr]=1;
        dis[nbr]=dis[node]+1;
        pre[nbr]=node;
        q.push(nbr);
      }
    }
    color[node]=2;
  }
}

void printPath(int source, int ind){
  if(source==ind){
    cout<<source<<" ";
  }
  else if(pre[ind]==-1){
    cout<<"no path"<<"\n";
  }
  else{
    printPath(source, pre[ind]);
    cout<<ind<<" ";
  }
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  int n,edge,u,v;
  cin>>n>>edge;

  for(int i=0;i<edge;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  int source;
  cin>>source;

  bfs(source, n);

  for(int i=0;i<n;i++){
    if(i==source){
      continue;
    }
    else{
      printPath(source,i);
      cout<<"cost: "<<dis[i]<<endl;
    }
  }

  return 0;
} 