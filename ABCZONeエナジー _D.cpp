 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   string S;
   cin >> S;
   int S_size = S.size();

   string T = "";
   int R_flg = 0;
   for(int i = 0; i < S_size; i++){
      if(S[i] == 'R') {
          R_flg++;
          R_flg %= 2;
          continue;
      } 

      if(R_flg == 0) {
        if(T[T.size()-1] != S[i]) {
              T += S[i];
          } else{
              T = T.substr(0,T.size()-1);
        }
      } else {
          if(T[0] != S[i]) {
              T = S[i] + T;
          } else{
              T = T.substr(1,T.size());
        }
      }
   }

   if(R_flg == 1) {
       reverse(T.begin(), T.end());
   }

   cout << T << endl;

}