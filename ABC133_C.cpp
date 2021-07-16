#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}
const ll INF = 1LL << 60;

int main(){
  ll L, R;
  cin >> L >> R;
  const ll mod = 2019;
  ll ans = INF;
  chmin(R,L +20);

  for(int i=L;i<R;i++) {
    for(int j=i+1;j<=R;j++) {
      ll num = (i*j)%mod;
      chmin(ans,num);
      if(ans == 0) break;
    }
    if(ans == 0) break;
  }

  cout << ans << endl;

}