#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   string S;
   cin >>S;

   string ans = "Yes";

   int index =0;

   for(auto s:S) {
      if(index%2 ==0 && isupper(s)) {
         ans = "No";
         break;
      }
      if(index%2 !=0 && islower(s)) {
         ans = "No";
         break;
      }
      index++;
   }

   cout << ans << endl;

}