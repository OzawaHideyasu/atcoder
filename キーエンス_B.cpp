#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   string S;
   cin >> S;

   int size_s = S.size();

   string ans = "NO";

   string keyword = "keyence";
   
   string head_s = S.substr(0,7);
   string tail_s = S.substr(size_s - 7);

   if (head_s == keyword || tail_s == keyword) {
       ans = "YES";
       cout << ans << endl;
       return 0;
   }

   for(int i = 1 ; i < 7; i++) {
       string concat_s = S.substr(0,i) + S.substr(size_s + i - 7);
       if(concat_s == keyword) {
           ans = "YES";
           cout << ans << endl;
           return 0;
       }
   }

   cout << ans << endl;

}