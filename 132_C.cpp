#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main(){
   ll n;
   cin >> n;
   vector<ll> X(n);

   for(int i = 0; i < n; i++){
      cin >> X.at(i);
   }

   vector<int> P = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

   ll ans = INF;

   for(int bit = 1;  bit < (1<<15); bit++){
      ll num =1;
      for (int i = 0; i < 15; i++) {
            if (bit & (1<<i)) {
                num *= P.at(i);
            }
      }
      ll cnt =0;
      for(int i = 0; i < n; i++){
         if(__gcd(X.at(i),num) == 1) {
            break;
         }
         cnt++;
      }
      if(cnt == n) {
         ans = min(ans,num);
      }
   }

   cout << ans << endl;

}