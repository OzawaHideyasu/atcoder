#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   string s;
   cin >> s;

   string ans = "Lost";

   if(s[0] == s[1]) {
      if(s[0 ]==s[2]) {
         ans = "Won";
      }
   }

   cout << ans << endl;

}