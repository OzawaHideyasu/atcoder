#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int N;
   cin >> N;

   int cnt = 0;

   for (int a = 1; a < N; a++){
      for(int b = 1; b < N; b++){
         if (a*b < N){
            cnt++;
         }
         else {
            break;
         }
      }
   }

   cout << cnt << endl;

}
