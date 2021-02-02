#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll n, s, d;
   cin >> n >> s >> d;


   string ans = "No";
   for(int i = 0; i < n; i++){
      ll x ,y;
      cin >> x >> y;

      if(x < s && y > d) {
         ans ="Yes";
         break;
      }
   }

   cout << ans << endl;

}