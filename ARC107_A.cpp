#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   ll a, b, c;
   cin >> a >> b >> c;
   ll mod = 998244353;

   ll sum_a = (a*(a+1)/2)%mod;
   ll sum_b = (b*(b+1)/2)%mod;
   ll sum_c = (c*(c+1)/2)%mod;

   ll sum = ((sum_a * sum_b)%mod) * sum_c %mod;


   cout << sum%mod << endl;


}