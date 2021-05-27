#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;

   vector<ll> A(n+1);
   vector<ll> B(n);
   vector<ll> C(n);

   for(int i = 1; i < n+1; i++){
       ll a;
       cin >> a;
       A.at(a)++;
   }
   for(int i = 0; i < n; i++){
      cin >> B.at(i);
   }
   for(int i = 0; i < n; i++){
      cin >> C.at(i);
   }

    ll cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += A.at(B.at(C.at(i)-1));
   }


   cout << cnt << endl;

}