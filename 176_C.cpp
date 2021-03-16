#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<ll> A(n);
   
   ll cnt = 0;
   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }

   for(int i = 0; i < n-1; i++){
      if(A.at(i) <= A.at(i+1)) {
         continue;
      }
      cnt += A.at(i) - A.at(i+1);
      A.at(i+1) = A.at(i);
   }

   cout << cnt << endl;

}