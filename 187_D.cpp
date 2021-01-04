#include <bits/stdc++.h>
#include <set>
using namespace std;



int main(){

   int n;
   cin >> n;
   vector<string> S(n) ;
   for(int i=0;i<n;i++) {
      cin >> S.at(i);
   }
   string ans = "satisfiable";

   for(int i=0;i<n;i++) {
       string s;
      if(S.at(i)[0] =='!') {
          s = S.at(i).substr(1);
      } else {
          s = "!" + S.at(i);
      }

      for(int j=0;j<n;j++) {
          bool break_flg =false;
          if(j == i) {
              continue;
          }
          if(S.at(j) == s) {
              ans = s;
              break_flg = true;
          }
          if(break_flg == true) {
              break;
          }
      }

   }

   cout << ans << endl;

}