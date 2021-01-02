#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   long long N, D, x, y;
   cin >> N >> D;

   int cnt =0;
   long long distD = D * D;

   for(int i = 0; i < N; i++) {
       cin >> x >> y;
        double distP = x*x + y*y;
       if (distP <= distD) {
           cnt++;
       }
   }

   cout << cnt << endl;

}