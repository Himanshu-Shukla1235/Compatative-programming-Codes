#include <bits/stdc++.h>
using namespace std;

#define ll long long 
const ll  N =1e5 +5 ;


void logic();

//--------------------------------------------------
vector<pair<ll,ll>>times(N); 
ll timer=0;
vector<vector<ll>>adj(N);  // cin by user 
vector<ll>vis(N,0);


void dfs(ll node ){
    vis[node]=1;
    timer++;
    times[node].first = timer;

    for(auto &val : adj[node] ){
        if(!vis[val]){
            vis[val]=1;
            dfs(val);
            
        }
    }
    timer++;
    times[node].second=timer;
}

bool queri(ll i , ll j){
    return (times[i].first < times[j].first && times[i].second > times[j].second);
}
int main (){
    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    ll t=1;

    while(t--){
        logic();
    }
    
}

void logic(){
    ll n; // number of the nodes , so the number of hte edges are n-1
    cin>>n;

    for(ll i=1 ; i<n ; i++ ){
        ll a,b;
        cin>>a>>b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }

// start the dfs and the timer 
    dfs(1);

// resolve the given quiries     
    ll q; 
    cin>>q;

    while(q--){

        ll i , j ;

        cin >> i >> j;

        bool ch = queri(i,j);

        if(ch){

            cout<< "yes" << "\n" ;  

        }else{
            cout<< "no" << "\n";
        }


    }


}

