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

   sort(S.begin(), S.end(), greater<string>());
   int index = 1000000;
   for(int i=0;i<n;i++) {
       if(S.at(i)[0] == '!'){
           index = i;
           break;
       }

   }

   unordered_set<string> h(S.begin(), S.end());

   for(int i = 0; i < index + 1 ;i++) {
      if(h.find(S.at(i))) {
         ans = S.at(i);
         break;
      }
   }


   cout << ans << endl;

}