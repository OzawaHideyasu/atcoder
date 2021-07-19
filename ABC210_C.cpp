#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main(){
   ll n,k;
   cin >> n >> k;

   vector<ll> C(n);
   for(int i = 0; i < n; i++){
      cin >> C.at(i);
   }
   

   map<ll,ll> mp;
   for(ll i = 0; i < k; i++){
      mp[C.at(i)]++;
   }
   
   ll ans = 0;
   for(auto m:mp){
      if(m.second > 0) ans++;
   }
   // cout << ans << endl;

   ll max = ans;
   for(ll i = k; i < n; i++){
      ll num= 0;
      // cout << "i= "<<i << ";"<<mp[C.at(i)]<< ";" << mp[C.at(i-k)] << endl;
      mp[C.at(i)]++;
      mp[C.at(i-k)]--;
      if(C.at(i) == C.at(i-k)) continue;
      if(mp[C.at(i)] == 1) ans++;
      if(mp[C.at(i-k)] == 0) ans--;
      // cout <<"i= "<<i << ";"<< ans << endl;
      
      chmax(max,ans);
      if(max == k) break;

   }

   cout << max << endl;

}