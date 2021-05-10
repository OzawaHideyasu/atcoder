#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n, k;
   cin >> n >> k;

   for(int i = 0; i < k; i++){
      if(n%200 == 0) {
         n /= 200;
      } else {
         string str = to_string(n);
         str += "200";
         n = stoll(str);
      }
   }

   cout << n << endl;

}