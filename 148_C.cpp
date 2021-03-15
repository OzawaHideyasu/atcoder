#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//最大公約数
ll gcd (ll a, ll b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

// 最小公倍数
ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}

int main(){
   ll a ,b;
   cin >> a >> b;

   cout << lcm(a, b) << endl;
}