#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   ll n ,a,x,y;
   cin >> n >> a >> x >> y;
   

   ll ans = 0;
   if(n<=a) {
      ans += n *x;
   } else {
      ans += a*x + (n-a)*y;
   }

   cout << ans << endl;

}