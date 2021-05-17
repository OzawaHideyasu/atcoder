#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;
   vector<vector<vector<ll>>> A(100,vector<vector<ll>>(2,vector<ll>()));

   ll cnt =0;
   for(int i = 0; i < n; i++){
      ll n;
      cin >> n;
      ll evenodd = (n/100)%2;
      A.at(n%100).at(evenodd).push_back(n);
   }

   for(int i= 0; i < 100; i++) {
      for(int j= 0; j < 2; j++){
         for(auto k :A.at(i).at(j)) {
         }
      if(A.at(i).at(j).size() == 0) continue;
      if(A.at(i).at(j).size() == 1) continue;

      ll a = A.at(i).at(j).size();

      cnt+= a*(a-1)/2;
      }
   }

   cout << cnt << endl;

}