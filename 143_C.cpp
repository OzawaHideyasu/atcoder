#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;
   char s;


   ll ans = 1;
   cin >>s;
   char record = s;
   for(int i = 1; i < n; i++){
      cin >> s;
      if(s == record) {
          continue;
      }
      record = s;
      ans++;
   }

   cout << ans << endl;

}