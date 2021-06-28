#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   int n;
   cin >> n;
   // vector<int> T(n);
   // for(int i = 0; i < n; i++){
   //    cin >> T.at(i);
   // }
   // vector<ll> T(n);
   vector<pair<double, double>> I(n);
   
   for(int i = 0; i < n; i++){
      int t;
      cin >> t;
      double l,r;
      cin >> l >> r;

      if(t == 2) {
         r -= 0.1;
      } else if(t == 3) {
         l += 0.1;
      } else if(t == 4) {
         l += 0.1;
         r -= 0.1;
      }
      I.at(i) = make_pair(l, r);
   }

   ll cnt = 0;
   for(ll i = 0; i < n-1; i++){
      for(ll j = i; j < n; j++){
         if(I.at(i).second <  I.at(j).first) {
            cnt++;
         } else if(I.at(j).second <  I.at(i).first){
            cnt++;
         }
      }
   }

   // cout << fixed << setprecision(3);
   // for(auto i :I){
   //    cout << "l = "<<i.first << ";r = "<<i.second << endl;
   // }

   ll ans = (n*(n-1))/2-cnt;

   cout << ans << endl;

}