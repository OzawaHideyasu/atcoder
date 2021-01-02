#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int r, g, b, k;
   cin >> r >> g >> b >> k ;

   while (r >= g && k > 0) {
       g *= 2;
       k--;
       cout << "g = " << g << endl;
   }

      while (g >= b && k > 0) {
       b *= 2;
       k--;
       cout << "b = " << b << endl;
   }

   string ans = "No";

   if(r < g && g < b) {
       ans = "Yes";
   }

   cout << ans << endl;

}