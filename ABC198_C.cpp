#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
 
int main(){
   ll r;
   cin >> r;
   ll x ,y;
   cin >> x >> y;
   ll ans = INF;

 
   double dist = sqrt(x*x + y*y);
   ans = ceil(dist/r);
 
 if((x!=0 || y !=0) && dist < r) {
     ans = 2;
 }

 cout << ans << endl;
}