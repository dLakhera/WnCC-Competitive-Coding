// #include<bits/stdc++.h>
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000003
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define input(a) for(int i=0;i<a.size();i++) cin>>a[i];
#define test int t; cin>>t; while(t--)
#define vi vector<int>
#define vii vector<pair<int,int>>
#define ii pair<int,int>
#define ff first
#define ss second

using namespace std ;

const int N=100010;
vector<int> adj[N] ;
bool vis[N]={false} ;

void dfs(int node)
{
	vis[node]=true ;
	for(int i=0 ;i<adj[node].size() ; i++){
		int u=adj[node][i] ;
		if(!vis[u]){
			dfs(u) ;
		}
	}
	return ;
}

int main()
{
	int n,m ;
	cin >> n >> m ;
	for(int i=0 ; i<m ; i++){
		int u,v ;
		cin >> u >> v ;
		adj[u].push_back(v);
		adj[v].push_back(u) ;
	}
	dfs(1) ;

	return 0 ;
}