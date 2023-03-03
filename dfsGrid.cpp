#include<bits/stdc++.h>
using namespace std;

int maze[100][100], color[100][100];
int row, col;

struct myQ{
    int x,y;
}temp, temp2;
myQ par[100][100];


void dfs(int stri, int strj)
{
    color[stri][strj]=1;

     if(stri-1 >=0 &&color[stri-1][strj] == 0 && maze[stri-1][strj] == 1){
            color[stri-1][strj] = 1 ;
            par[stri-1][strj].x = stri;
            par[stri-1][strj].y = strj;

            dfs(stri-1, strj);
    }
    if(stri+1 < row &&color[stri+1][strj] == 0 && maze[stri+1][strj] == 1){
            color[stri+1][strj] = 1 ;
            par[stri+1][strj].x = stri;
            par[stri+1][strj].y = strj;

            dfs(stri+1, strj);
    }
    if(strj-1>0 &&color[stri][strj-1] == 0 && maze[stri][strj-1] == 1){
            color[stri][strj-1] = 1;
            par[stri][strj-1].x = stri;
            par[stri][strj-1].y = strj;

            dfs(stri, strj-1);
    }
    if(strj+1 < col &&color[stri][strj+1] == 0 && maze[stri][strj+1] == 1){
            color[stri][strj+1] = 1 ;
            par[stri][strj+1].x = stri;
            par[stri][strj+1].y = strj;

            dfs(stri, strj+1);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>maze[i][j];
            color[i][j]=0;
        }
    }
    int stri,strj,fini,finj;
    cin>>stri>>strj;
    cin>>fini>>finj;

    color[stri][strj]=1;

    dfs(stri, strj);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<par[i][j].x<<","<<par[i][j].y<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<color[i][j]<<"\t"; //color
        }
        cout<<endl;
    }
    cout<<endl;

    if(par[fini][finj].x==0){
        cout<<"No Path"<<endl;
    }
    else{
        while(par[fini][finj].x!=stri){
            int newfin = fini;
            cout<<"("<<par[fini][finj].x<<","<<par[fini][finj].y<<")";
            fini = par[fini][finj].x;
            finj = par[newfin][finj].y;
        }    
    }
    


    /*
    7 6
    1 1 1 1 1 0
    1 1 1 0 0 0
    0 1 1 1 1 0
    1 0 0 0 1 1
    1 1 1 1 1 1
    0 0 0 1 1 1
    1 1 1 1 0 0

    0 0
    6 3
     */
}
