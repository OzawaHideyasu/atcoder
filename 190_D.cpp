#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;

   ll N = 2*n;
   int ans = 0;
   for(int m = 1; m <= sqrt(2*n); m++){
      if(N%m != 0) {
         continue;
      }
      ll num = N/m -m +1;
      if(num%2 == 0) {
         ans+=2;
      }
   }

   cout <<  ans << endl;

}