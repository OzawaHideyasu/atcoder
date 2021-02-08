#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   double x ,y, r;
   cin >> x >> y >> r;
   double r_2 = pow(r,2);

   ll ans = 0;
   for(int i = x - r; i <= x + r; i++){
      for(int j = y - r; j <= y + r; j++){
         cout << "i=" << i << ";j=" << j << endl;
         double dist = pow((i-x),2)+ pow((j-y),2);
         if(dist <= r_2) {
            ans++;
         }
      }
   }

   cout << ans << endl;

}