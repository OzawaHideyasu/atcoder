#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int N, M;
   cin >> N >> M;
   
   vector<pair<int, int>> condition(M);
   for(int i= 0;i<M; i++) {
      cin >> condition.at(i).first >> condition.at(i).second;
   }

   int K;
   cin >> K;

   vector<pair<int, int>> choice(K);
   for(int i= 0; i < K; i++) {
      cin >> choice.at(i).first >>  choice.at(i).second;
   }

   int ans = 0;
   for(int bit = 0; bit < 1 << K; bit++){
      vector<bool> ball(N);
      
      for(int i = 0; i < K; i++){
         int c = choice.at(i).first;
         int d = choice.at(i).second;
         ball[bit & 1 << i ? c : d] = 1;
      }
      
      int cnt = 0;
      for(auto [A, B] : cond) if(ball[A] && ball[B]) cnt++;
      if(ans < cnt) ans = cnt;
   }
   cout << ans << endl;
}