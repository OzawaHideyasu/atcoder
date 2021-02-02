#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int a ,b,c;
   cin >> a >> b >>c;

   string ans = "Aoki";

   if(c ==0 ) {
      if(a>b) {
         ans = "Takahashi";
      }
   }
   else {
      if(a>b-1) {
         ans = "Takahashi";
      }
   }

   cout << ans << endl;

}