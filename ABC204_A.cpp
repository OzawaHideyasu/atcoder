#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int a ,b;
   cin >> a >> b;

   int ans = 0;
   if(a == b){
       ans = a;
   } else {
       int ab = a+b;
       if (ab == 1) {
           ans = 2;
       } else if(ab == 2) {
           ans = 1;
       } else if (ab == 3){
           ans =0;
       }
   }

   cout << ans << endl;

}