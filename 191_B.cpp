#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll n,x;
   cin >> n >> x;
   vector<ll> A(n);
   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }

   for(int i = 0; i < n; i++){
      if(A.at(i) != x){
         cout << A.at(i) << " ";
      }
   }


}