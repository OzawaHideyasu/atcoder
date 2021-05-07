 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   string s;
   cin >> s;

   int cnt = 0;
   for(int i = 0; i <= 8; i++){
      if(s[i]== 'Z') {
          if(s[i+1] == 'O') {
              if(s[i+2] == 'N') {
                  if(s[i+3] == 'e') {
                      cnt++;
                  }
              }
          }
      }
   }

   cout << cnt << endl;

}