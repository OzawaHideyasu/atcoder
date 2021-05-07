 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int H,W;
   cin >> H >> W;
   vector<vector<int>> A(H, vector<int>(W,0));

   for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++) {
          cin >> A.at(i).at(j);
      }
   }

   vector<int> RAW(H);
   for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++) {
          RAW.at(i) += A.at(i).at(j);
      }
   }

   vector<int> COL(W);
   for(int j = 0; j < W; j++){
      for(int i = 0; i < H; i++) {
          COL.at(j) += A.at(i).at(j);
      }
   }

   vector<vector<int>> B(H, vector<int>(W,0));
   for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++) {
          B.at(i).at(j) = RAW.at(i) + COL.at(j) - A.at(i).at(j);
      }
   }


   for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++) {
          cout <<  B.at(i).at(j) << " ";
      }
      cout << "" << endl;
   }

}