#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;
   ll a;

   string ans = "NO";
   int cnt = 0;
   for(int i = 0; i < n; i++){
      cin >> a;
      if(a%2 ==1) {
         cnt++;
      }
   }

   if(cnt%2 ==0) {
      ans = "YES"
   }

   cout << ans << endl;

}