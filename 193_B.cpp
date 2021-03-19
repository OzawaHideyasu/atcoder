#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

int main(){
   int n;
   cin >> n;

   ll min_price = INF;
   for(int i = 0; i < n; i++){
      ll a ,p, x;
      cin >> a >> p >> x;

      if(x-a > 0) {
          chmin(min_price,p);
      }
   }

   if(min_price == INF) {
       min_price = -1;
   }

   cout << min_price << endl;

}