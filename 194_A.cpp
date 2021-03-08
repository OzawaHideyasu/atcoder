#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;

   int ans = 0;
   for(int i = 0; i < 3; i++){
      ans += (i+1)/pow(n,i+1);
      cout << ans << endl;
   }

   cout << ans << endl;

}