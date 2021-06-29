#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   int a,b,c;
   cin >> a >> b >> c;
   
   string ans = "NO";
   int aa = a;
   while(ans == "NO") {
      int num = aa%b;

      if(num ==c) {
         ans = "YES";
         break;
      }
      if(num == 0) {
         break;
      }
      aa += a;
   }

   cout << ans <<endl;

}