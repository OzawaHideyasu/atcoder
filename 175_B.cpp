#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int n;
   cin >> n ;

   vector<long long> L(n);

   int cnt = 0;

   for (int i = 0; i < n; i++) {
       cin >> L.at(i);
   }
   sort(L.begin(), L.end());

   for (int i = 0; i < n-2 ;i++ ) {
       for (int j = i+1; j < n - 1; j++) {
           if( L.at(j) == L.at(i)) {
               continue;
           }
           for (int k = j + 1; k < n; k++) {
                if( L.at(k) == L.at(j)) {
                    continue;
                }
                bool isTriangle = L.at(i) + L.at(j) > L.at(k);
                if(isTriangle) {
                    cnt++;
                }
           }
       }
   }

   cout << cnt << endl;

}