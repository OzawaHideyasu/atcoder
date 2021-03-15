#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

ll g1(ll a) {
      string s = to_string(a);
      sort(s.begin(), s.end(), greater<int>());

      return stoi(s);
   }
ll g2(ll a) {
      string s = to_string(a);
      sort(s.begin(), s.end());

      return stoi(s);
   }

ll f(ll a) {
   return g1(a) - g2(a);
}


int main(){
   ll n, k;
   cin >> n >> k;

   ll ans = n;

   for(int i = 0; i < k; i++){
      ans =f(ans);
      if(ans == 0) {
         break;
      }
   }

   cout << ans << endl;

}