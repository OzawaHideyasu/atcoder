#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n,t;
   cin >> n >> t;

   vector<ll> A(n);
   for(int i = 0;i<n;i++){
      cin >> A.at(i);
   }

   ll sum_time = 0;
   for(ll i = 0;i<n-1;i++) {
      ll diff = A.at(i+1) - A.at(i);
      if(diff < t) {
      sum_time += diff;
      }else{
         sum_time += t;
      }
      // cout << i<<";"<< sum_time << endl;
   }

   sum_time += t;
   cout << sum_time << endl;

}