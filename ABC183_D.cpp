#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll n,w;
  cin >> n >> w;

  vector<ll> S(n),T(n),P(n);
  for(ll i = 0; i < n; i++){
    cin >> S.at(i) >> T.at(i) >> P.at(i);
  }
  string ans = "Yes";
  map<ll ,ll> mp;
  
  for(ll i = 0; i < n; i++){
    mp[S.at(i)] += P.at(i);
    mp[T.at(i)] -= P.at(i);
  }
  vector<ll> R(n);
  R = T;
  sort(R.begin(), R.end());

  ll end =R.at(n-1);
  if (mp[0] > w) ans = "No";
  for(ll i = 0; i <=end; i++){
    mp[i+1] += mp[i];
    if(mp[i+1] > w) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;

}