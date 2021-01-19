#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int H,W;
   cin >> H >> W;
   vector<int> A(H * W);

   for(int i=0;i<H*W ;i++) {
       cin >> A.at(i);
   }

   auto minmax = minmax_element(A.begin(), A.end());
   int min_A = *minmax.first;

   int sum = 0;

   for(auto a : A){
      sum += a-min_A;
   }
   cout << sum << endl;
}