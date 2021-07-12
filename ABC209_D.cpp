#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector<vector<ll>>;

int main(){
  ll n,q;
  cin >> n >> q;

  Graph G(n);
  for (ll i = 0; i < n-1; i++) {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<ll> dist(n, -1);
  queue<ll> que;
  while (!que.empty()) {
    que.pop();
  }

  dist[0] = 0;
  que.push(0);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int nv : G[v]) {
      if (dist[nv] != -1) continue;

      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  vector<ll> Ans(q);
  for(ll i = 0; i < q; i++) {
    ll c, d;
    cin >> c >> d;
    c--;
    d--;

    ll distc = dist[c];
    ll distd = dist[d];
    ll num = abs(distc-distd);

    if(num%2 == 0) {
      Ans.at(i) = 0;
    } else {
      Ans.at(i)= 1;
    }

  }

  for(auto ans :Ans) {
    if(ans ==0) {
      
    cout << "Town" << endl;
    } else {
      
    cout << "Road" << endl;
    }
  }


}