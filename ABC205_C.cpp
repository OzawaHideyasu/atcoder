#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll a, b, c;
   cin >> a >> b >> c;

   string ans = "<";
   bool cIsEven = false;
   if(c%2 == 0) {
      cIsEven = true;
   }

   if(cIsEven) {
      if(abs(a) == abs(b)) {
         ans = "=";
      } else if(abs(a) > abs(b)) {
            ans = ">";
      }
   } else {
      if(a == b) {
         ans = "=";
      }else if(a > b) {
         ans = ">";
      }
   }

   cout << ans << endl;

}