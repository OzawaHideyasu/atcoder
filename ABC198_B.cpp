#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   string n;
   cin >> n;
   string m =n;

   string ans = "No";
   reverse(m.begin(), m.end());

   ll ll_m = stoi(m);
   string str_m = to_string(ll_m);
   string str_m2 = str_m;
   reverse(str_m2.begin(), str_m2.end());


   if(str_m == str_m2) {
       ans = "Yes";
   }
   cout << ans << endl;

}