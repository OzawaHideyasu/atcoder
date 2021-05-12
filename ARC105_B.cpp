#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b) {
   if (a % b == 0) {
      return b;
   }
   return gcd(b, a % b);
}

int main(){
   ll n;
   cin >> n;

   vector<ll> A(n);
   for(int i = 0;i<n;i++){
      cin >> A.at(i);
   }

   ll a = A.at(0);
   for(int i = 1; i < n; i++) {
      ll b = A.at(i);
      a = gcd(a,b);
   }

   cout << a << endl;

}