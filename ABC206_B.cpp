#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   ll n;
   cin >> n;

   ll money = 1;
   ll cnt = 1;
   while(money < n) {
      cnt++;
      money += cnt;
      
   }

   cout << cnt << endl;

}