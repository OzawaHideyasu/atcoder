 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int a ,b,c;
   cin >> a >> b >> c;

   ll left = a*a + b*b;
   ll right = c*c;
   string ans = "No";

   if(left < right) {
      ans = "Yes";
   }

   cout << ans << endl;

}