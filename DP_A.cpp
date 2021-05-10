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
   ll n;
   cin >> n;
   vector<ll> H(n);

   for(int i = 0; i < n; i++){
      cin >> H.at(i);
   }

   vector<ll> DP(n,INF);
   DP.at(0) = 0;

   for(int i = 1; i < n; i++){
      chmin(DP.at(i),DP.at(i-1) + abs(H.at(i)-H.at(i-1)));

      if(i > 1) {
         chmin(DP.at(i),DP.at(i-2) + abs(H.at(i)-H.at(i-2)));
      }
   }

   cout << DP.at(n-1) << endl;

}