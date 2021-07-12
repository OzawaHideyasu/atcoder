#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ull n;
  cin >> n;

  vector<ull> C(n);
  for(ull i = 0; i < n; i++){
    cin >> C.at(i);
  }

  ull mod = 1000000007;

  ull ans = 1;
  sort(C.begin(), C.end());

  for(ull i = 0; i < n; i++){
      ull num = C.at(i)-i;
      ans *= num;
      ans %= mod;
      // cout << "i = "<< i << ":num = "<< num << endl;
      // cout << "i = "<< i << ":ans = "<< ans << endl;
  }

  // cout << ans << endl;
  cout << ans%mod << endl;

}