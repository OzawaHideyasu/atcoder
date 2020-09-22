#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int N, D1, D2;
   cin >> N;

   vector<int> IsDoublet(N);
   string ans = "No";


   for (int i = 0; i < N; i++) {
       cin >> D1;
       cin >> D2;

       if(D1 == D2) {
           IsDoublet.at(i) = 1;
       }
       else {
           IsDoublet.at(i) = 0;
       }
   }

   for (int i = 1; i < N-1; i++) {
      int cnt = IsDoublet.at(i-1)+ IsDoublet.at(i) +IsDoublet.at(i+1);
        if (cnt == 3) {
           ans = "Yes";
           break;
        }
   }

   cout << ans << endl;

}
