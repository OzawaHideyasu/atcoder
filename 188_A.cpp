#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int a ,b;
   cin >> a >> b;

   string ans = "No";

   if(a < b) {
      if(a+3 > b) {
         ans ="Yes";
      }
   }else{
      if(b+3 > a) {
         ans ="Yes";
      }

   }

   cout << ans << endl;

}