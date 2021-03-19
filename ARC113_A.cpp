#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   int k;
   cin >> k;

   ll cnt = 0;
   for(int i = 1; i <= k; i++){
       for(int j = 1; i*j <= k; j++){
          for(int l = 1; i*j*l <= k; l++){
              if(i*j*l <=k) {
                  cnt++;
              }
          }
       }
   }

   cout << cnt << endl;

}