#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int H,W;
   cin >> H >> W;

   vector<vector<char>> S(H, vector<char>(W,'.'));

   int ans = 0;
   for(int i = 0; i < H; i++){
      for(int j =0; j <W; j++) {
         cin >> S.at(i).at(j);
      }
   }

   cout << ans << endl;
   cout << S.at(H-1).at(W-1) << endl;

}