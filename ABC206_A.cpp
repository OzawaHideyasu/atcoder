#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;

   ll num = n*1.08;

   string ans = ":(";
   if(num < 206) {
      ans = "Yay!";
   } else if(num == 206) {
      ans = "so-so";
   }

   cout << ans << endl;

}