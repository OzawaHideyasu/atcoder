#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   ll n;
   cin >> n;
   string S;
   cin >> S;
   
  

   string ans = "Aoki";
   for(int i = 0; i < n; i++){
      char s = S.at(i);

      if(s == '1') {
         if(i%2 ==0) ans = "Takahashi";
         break;
      }
   }

   cout << ans << endl;

}