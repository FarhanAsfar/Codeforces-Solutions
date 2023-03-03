#include<stdio.h>
#include<queue>
 using namespace std;

 vector<int>g[100] ;
 queue<int>Q ;
 int col[100], d[100], par[100] ;

 void initialization(int n, int src){
     for(int i = 0 ; i < n ; i++){
        col[i] = 0 ;
        d[i] = 99999 ;
        par[i] = -1 ;
     }
     while(!Q.empty()) Q.pop() ;

     col[src] = 1 ;
     d[src] = 0 ;
     Q.push(src) ;
 }

 void bfs()
 {
     while(!Q.empty()){
        int u = Q.front() ;
        Q.pop() ;
        for(int i = 0 ; i < g[u].size() ; i++){
            int v = g[u][i] ;
            if(col[v] == 0){
                col[v] = 1 ;
                d[v] = d[u] + 1 ;
                par[v] = u ;
                Q.push(v) ;
            }
        }
        col[u] = 2 ;
     }
 }

 void printPath(int src, int dst)
 {
    if(src == dst){
        printf("%d ", src) ;
        return ;
    }
    if(dst == -1){
      //  printf("No path") ;
        return ;
    }
    printPath(src, par[dst]) ;
    printf("%d ", dst) ;
 }
 int main()
 {
     int n, edge, i, j, u, v, src ;
     scanf("%d %d", &n , &edge) ;
     for(i = 0 ; i < edge ; i++){
        scanf("%d %d", &u, &v) ;
        g[u].push_back(v) ;
        g[v].push_back(u) ;
     }
    // scanf("%d", &src) ;
    for(j = 0 ; j < n ; j++){

         initialization(n, j) ;
         bfs() ;
         for(i = 0 ; i < n ; i++){
            if(j != i){
                printPath(j, i) ;
                printf("Cost: %d\n", d[i]) ;
            }
        }
        printf("\n\n") ;
    }

 }
