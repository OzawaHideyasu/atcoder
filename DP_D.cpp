#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<class T> void chmax(T& a, T b) {
   if (a < b) {
      a = b;
   }
}
int main(){
   ll n, w;
   cin >> n >> w;
   vector<ll> Weight(n);
   vector<ll> Value(n);

   for(int i = 0; i < n; i++){
      cin >> Weight.at(i);
      cin >> Value.at(i);
   
   }
   vector<vector<ll>> DP(n+1,vector<ll>(w+1));
   for(int i = 0; i < n; i++){
      for(int j =0; j<= w; j++) {
         if(j - Weight.at(i) >= 0) {
             chmax(DP.at(i+1).at(j), DP.at(i).at(j - Weight.at(i))+Value.at(i));
         }
         chmax(DP.at(i+1).at(j),DP.at(i).at(j));
      }
   }

   cout << DP.at(n).at(w) << endl;

}