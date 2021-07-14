#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}


int main(){
   int n;
   cin >> n;

   vector<int> Scores(n);
   for(int i = 0; i < n; i++){
      cin >> Scores.at(i);
   }

   vector<vector<int>> DP(n+1,vector<int>(n*100+1,0));
   DP.at(0).at(0) = 1;

   for(int i = 0; i < n; i++){
      for(int j = 0; j < n*100+1; j++){
         if(DP.at(i).at(j)) {
            DP.at(i+1).at(j) = 1;
            DP.at(i+1).at(j + Scores.at(i)) = 1;
         }
      }
   }

   int ans = 0;
   for(int i = n*100; i > -0; i--){
      if(DP.at(n).at(i) != 0) {
         if(i%10 != 0) {
            chmax(ans,i);
         }
      }
   }

   cout << ans <<endl;



}