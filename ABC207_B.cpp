#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   double a ,b,c,d;
   cin >> a >> b >> c >> d;


   ll ans = -1;

   ll num = ceil(a/(c*d-b));

   if(num >= 0) {
      ans = num;
   }

   cout << ans << endl;

}