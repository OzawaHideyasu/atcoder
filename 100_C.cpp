#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   ll a;

   ll ans = 0;
   for(int i = 0; i < n; i++){

      cin >> a;
      while(a%2 == 0) {
         ans++;
         a /= 2;
      }
   }

   cout << ans << endl;

}