#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int v,t,s,d;
   cin >> v >> t >> s >> d;

   string ans = "Yes";
   int point_start = t * v;
   int point_end = s * v;

   if (d >= point_start && d <= point_end) {
      ans = "No";
   }
   

   cout << ans << endl;

}