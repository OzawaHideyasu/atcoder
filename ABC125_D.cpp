#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
template<class T> void chmin(T& a, T b) {
   if (a > b) {
      a = b;
   }
}

int main(){
   ll N;
   cin >> N;
   vector<ll> A(N);
   for(int i = 0; i < N; i++){
      cin >> A.at(i);
   }

   ll cnt = count_if(A.begin(),A.end(),[](ll x) {return x < 0; });
   ll ans = 0;
   ll min_a =INF;
   for(int i = 0; i < N; i++){
         ans += abs(A.at(i));
         chmin(min_a,abs(A.at(i)));
   }
   if(cnt%2 != 0) {
      ans -= 2*min_a;
   }
   
   cout << ans << endl;
}