#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;

   int ans = n/100;
   if(n%100 != 0) ans++;

   cout << ans << endl;

}