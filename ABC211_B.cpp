#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   set<string> S;
   for(int i = 0; i < 4; i++){
      string s;
      cin >> s;
      S.insert(s);
   }
   
   string ans = "No";
   if(S.size() == 4) ans = "Yes";

   cout << ans << endl;

}