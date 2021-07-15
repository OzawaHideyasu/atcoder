#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll n;
  cin >> n;

  vector<ll> X(n);
  for(int i = 0; i < n; i++){
    cin >> X.at(i);
  }
  
  vector<ll> Y(n);
  Y = X;
  sort(Y.begin(), Y.end());

  ll left = Y.at(n/2-1);
  ll right = Y.at((n/2));

  for(auto x:X) {
    if(x <= left) {
      cout << right << endl;
    } else {
      cout << left << endl;
    }
  }

}