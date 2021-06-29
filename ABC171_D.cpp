#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   ll n,q;
   cin >> n;
   map<ll,ll> A;
   for(ll i = 0; i < n; i++){
      ll a;
      cin >> a;
      A[a]++;
   }

   cin >> q;

   vector<ll> B(q), C(q);
   for(ll i = 0; i < q; i++){
      cin >> B.at(i) >> C.at(i);
   }

   ll sum = 0;
   for(auto m:A) {
      sum += m.first * m.second;
   }

   for(ll i = 0; i < q; i++) {
      ll num = A[B.at(i)];
      A[B.at(i)] = 0;
      A[C.at(i)] += num;
      sum -= (B.at(i)-C.at(i))*num;
      cout << sum <<endl;
   }


}