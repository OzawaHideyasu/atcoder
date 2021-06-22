#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll flipIndex(ll x, ll N) {
   if(x >= N) {
      x -= N;
   } else {
      x += N;
   }
   return x;
}


int main(){
   ll N;
   cin >> N;
   string S;
   cin >> S;
   ll Q;
   cin >> Q;
   
   vector<ll> T(Q),A(Q),B(Q);
   for(int i = 0; i < Q; i++){
      cin >> T.at(i)>> A.at(i)>> B.at(i);
   }

   bool fliper = true;
   for(int i = 0; i < Q; i++){
      if(T.at(i) == 2) {
         fliper = !fliper;
         continue;
      }

      ll index_a = A.at(i)-1;
      ll index_b = B.at(i)-1;

      if(!fliper) {
         index_a = flipIndex(index_a, N);
         index_b = flipIndex(index_b, N);
      }
      char a = S[index_a];
      char b = S[index_b];
      S.replace(index_a,1,string(1,b));
      S.replace(index_b,1,string(1,a));
   }
   if(!fliper) {
      rotate(S.begin(),S.begin() + N,S.end());
   }
   cout << S << endl;
}