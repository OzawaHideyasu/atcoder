#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ull gcd (ull a, ull b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}

int main(){
  ull A, B, C, D;
  cin >> A >> B >> C >> D;

  ull cnt = B-A+1;
  ull lcmCD = lcm(C, D);
  A--;

  cnt -= B/C - A/C;
  cnt -= B/D - A/D;
  cnt += B/lcmCD - A/lcmCD;

  cout << cnt << endl;
}