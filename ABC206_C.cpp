#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   ll n;
   cin >> n;

   map<ll,ll> mp;
   for(ll i = 0; i < n; i++){
      ll a;
      cin >> a;
      mp[a]++;
   }
   ll full = (n*(n-1))/2;

   for (const auto& [key, value] : mp){
      ll num = (value*(value-1))/2;
      full -= num;
    }

   

   cout << full << endl;

}