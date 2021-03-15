#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int a ,b, w;
   cin >> a >> b >> w;
   w *= 1000;

   string ans = "UNSATISFIABLE";
   int max=0;
   int min=0;

   if(w%a == 0) {
       max = w/a;
   } else {
        max = w/a;
   }
   
   if(w%b == 0) {
       min = w/b;
   } else {
        min = w/b + 1;
   }

   if(min > max) {
       cout << ans << endl;
   } else{
       cout << min << " " << max << endl;
   }

}