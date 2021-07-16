#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll n;
  cin >> n;

  map<string,ll> mp;
  for(ll i = 0;i<n;i++) {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    mp[s]++;
  }
  ll cnt = 0;
  for(auto m :mp) {
    ll num = m.second;
    if(m.second >1) {
      cnt+= ((num-1)*num)/2;
    }
  }

  cout << cnt << endl;

}