#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   string S;
   cin >> S;
   ll mod = pow(10,9) + 7;

   ll ans = 0;

   vector<ll> C;
   vector<ll> H;
   vector<ll> O;
   vector<ll> K;
   vector<ll> U;
   vector<ll> D;
   vector<ll> A;
   vector<ll> I;

   ll n = S.size();
   for(ll j = 0; j < n; j++){
      char s = S.at(j);
      if(s == 'c') {
         C.push_back(j);
      } else if(s == 'h') {
         H.push_back(j);
      } else if(s == 'o') {
         O.push_back(j);
      } else if(s == 'k') {
         K.push_back(j);
      } else if(s == 'u') {
         U.push_back(j);
      } else if(s == 'd') {
         D.push_back(j);
      } else if(s == 'a') {
         A.push_back(j);
      } else if(s == 'i') {
         I.push_back(j);
      }
   }

   for(auto c:C) {
      // cout <<"c = "<< c << endl;
      for(auto h:H) {
         if(h < c) continue;
         // cout <<"h= "<< h << endl;
         for(auto o:O) {
            if(o < h) continue;
            // cout <<"o = "<< o << endl;
            for(auto k:K) {
               if(k < o) continue;
               // cout <<"k = "<< k << endl;
               for(auto u:U) {
                  if(u < k) continue;
                  // cout <<"u = "<< u << endl;
                  for(auto d:D) {
                     if(d < u) continue;
                     // cout <<"d = "<< d << endl;
                     for(auto a:A) {
                        if(a < d) continue;
                        // cout <<"a = "<< a << endl;
                        for(auto i:I) {
                           if(i < a) continue;
                           // cout <<"i = "<< i << endl;
                           ans++;
                           ans %= mod;
                        }
                     }
                  }
               }
            }
         }
      }
   }

   cout << ans << endl;

}