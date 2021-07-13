#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll n;
  cin >> n;

  ll cnt = 0;
  ll upper = 2*n+2;
  ll k = 1;
  while(k*(k+1) <= upper) {
    k++;
  }

  cnt += n -k +2;

  cout << cnt << endl;

}