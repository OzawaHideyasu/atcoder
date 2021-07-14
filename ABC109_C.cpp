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
  ll n, x;
  cin >> n >> x;
  vector<ll> X(n);
  for(ll i = 0; i < n; i++){
    cin >> X.at(i);
  }
  vector<ll> D(n);
  for(ll i = 0; i < n; i++){
    D.at(i) = abs(X.at(i)-x);
  }
  ll gcdD = D.at(0);
  for(auto d:D) {
    gcdD = gcd(gcdD,d);
  }

  cout << gcdD << endl;

}