#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

ll sum(ll a, ll b) {
   return (a+b)*(b-a+1)/2;
}

int main(){
   ll t;
   cin >> t;

   for(int i = 0; i < t; i++){
      ll l ,r;
      cin >> l >> r;

      ll min_c = l;
      ll max_c = r-l;

      if(min_c > max_c) {
         cout << 0 << endl;
         continue;
      }

      cout << sum(r - max_c -l+1, r - min_c -l+1) << endl;
   }


}