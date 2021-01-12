#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   ll num = pow(2,n);
   vector<ll> A(num);

   int ans = 0;
   for(int i = 0; i < num; i++){
      cin >> A.at(i);
   }
   for(int i = n ; i > 0 ; i--) {
      vector<ll> V(pow(2,n),0);
      int k = 0;
      for(int j=0;j<num-1;j+=2) {
         if(A.at(j) < A.at(j+1)) {
            V.at(k) = A.at(j);
      }else{
         V.at(k) = A.at(j+1);
      }
      // cout << V.at(k) << endl;
      cout << k << endl;
      k++;
      }
   }




   // cout << A.at(num-1) << endl;
}