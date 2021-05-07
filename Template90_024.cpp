 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;
   ll k;
   cin >> k;

   ll diff = 0;

   string ans = "No";
   for(int i = 0; i < n; i++){
      ll a ,b;
      cin >> a >> b;

      diff += abs(a-b);
   }

   ll evaluation = k - diff;
   if(evaluation >= 0) {
      if(evaluation%2 == 0) {
         ans = "Yes";
      }
   }
   ll a = 0%2;
   cout << ans << endl;
   cout << a << endl;

}