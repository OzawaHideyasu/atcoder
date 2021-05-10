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
   ll n, k;
   cin >> n >> k;
   vector<ll> H(n);

   for(int i = 0; i < n; i++){
      cin >> H.at(i);
   }

   vector<ll> DP(n,INF);
   DP.at(0) = 0;

   for(int i = 0; i < n; i++){
      for(int j = 1; j <= k; j++) {
         if(i+j < n) {
            chmin(DP.at(i + j),DP.at(i) + abs(H.at(i+j)-H.at(i)));
            continue;
         }
         break;
      }
   }

   cout << DP.at(n-1) << endl;

}