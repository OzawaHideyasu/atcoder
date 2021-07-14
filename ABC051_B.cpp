#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll k,s;
  cin >> k >> s;
  ll cnt = 0;
  for(int i = 0;i<=k;i++) {
    for(int j = 0;j<=k;j++) {
    ll num = s-j-i;
    if(num >= 0 && num <= k) cnt++;
    }
  }

  cout << cnt <<endl;
}