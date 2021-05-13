#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

   vector<vector<char>> C(4,vector<char>(4));
   for(int row=0;row<4;row++) {
      for(int col=0;col<4;col++) {
         cin >> C.at(row).at(col);
      }
   }

   for(int row=3;row >=0;row--) {
      for(int col=3;col>=0;col--) {
         cout << C.at(row).at(col) << " ";
      }
      cout << "" << endl;
   }


}