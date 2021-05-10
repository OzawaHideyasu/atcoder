#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main(){
   ll n;
   cin >> n;
   vector<vector<ll>> A(n,vector<ll>(3));

   for(int i = 0; i < n; i++){
      for(int j = 0; j < 3; j++) {
         cin >> A.at(i).at(j);
      }
   }
   
   vector<vector<ll>> DP(n,vector<ll>(3));
   for(int j = 0; j < 3; j++) {
      DP.at(0).at(j) = A.at(0).at(j);
   }

   for(int i = 1; i < n; i++) {
      for(int j = 0; j < 3; j++) {
         for(int k = 0; k < 3; k++) {
            if(j == k) {
               continue;
            }
            chmax(DP.at(i).at(k),DP.at(i-1).at(j)+A.at(i).at(k));
         }
      }
   }
   ll ans =0;
   for(int j = 0; j < 3; j++) {
      chmax(ans,DP.at(n-1).at(j));
   }
   cout << ans << endl;

}