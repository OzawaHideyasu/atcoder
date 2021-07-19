#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   ll a ,b,c;
   cin >> a >> b >> c;
   ll diff1 = b - a;
   ll diff2 = c - b;
   ll diff = diff1-diff2;
   ll ans = 0;
   if(diff != 0){
      if(diff1 >=0 && diff2 >= 0) {
         if(diff >0) {
            ans  = diff;
         } else{
            ans  = ceil((double)abs(diff)/2);
            if(diff%2 != 0) ans++;
         }
      } else if(diff1 >=0 && diff2 < 0) {
         ans = diff;
      } else if(diff1 <0 && diff2 >= 0) {
         ans = ceil((double)abs(diff)/2);
         if(diff%2 != 0) ans++;
      } else if(diff1 <0 && diff2 < 0) {
         if(diff >0) {
            ans  = diff;
         } else{
            ans  = ceil((double)abs(diff)/2);
            if(diff%2 != 0) ans++;
         }
      }
   }

   cout << ans << endl;

}