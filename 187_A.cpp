#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int a ,b;
   cin >> a >> b;

   int sum_a = 0;
   int sum_b = 0;

   int ans = 0;
   for(int i = 0; i < 3; i++){
      sum_a += a%10;
      sum_b += b%10;
      a /= 10;
      b /= 10;
      if(sum_a >= sum_b) {
          ans = sum_a;
      }else {
          ans = sum_b;
      }
   }

   cout << ans << endl;

}