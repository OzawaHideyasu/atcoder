#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
template<class T> void chmin(T& a, T b) {
   if (a > b) {
      a = b;
   }
}

int main(){
   ll N,M;
   cin >> N >> M;
   vector<bool> A(N+1,true);
   for(ll i = 0; i < M; i++){
      ll a;
      cin >> a;
      A.at(a) = false;
   }

  ll mod = 1000000007;

   vector<ll> cnt(N+1,0);
   cnt.at(0) = 1;

   for(ll i = 0; i < N; i++){
      if(cnt.at(i) > 0) {
         if(i<N) {
            if(A.at(i+1)) {
               cnt.at(i+1) += cnt.at(i);
               cnt.at(i+1) %= mod;
            }
         }
         if(i<N-1) {
            if(A.at(i+2)) {
               cnt.at(i+2) += cnt.at(i);
               cnt.at(i+2) %= mod;
            }
         }
      }
   }

   cout << cnt.at(N)%mod << endl;
}