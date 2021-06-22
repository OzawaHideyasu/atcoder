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
   ll N;
   cin >> N;
   vector<ll> T(N);
   for(int i = 0; i < N; i++){
      cin >> T.at(i);
   }
   sort(T.begin(), T.end());

   double full_time = 0;
   for(int i = 0; i < N; i++){
      full_time += T.at(i);
   }
   ll half_time = ceil(full_time/2);

   vector<vector<ll>> visit(N,vector<ll>(full_time+1,0));
   visit.at(0).at(0) = 1;
   visit.at(0).at(T.at(0)) = 1;

   for(int i=1; i<N; i++){
      for(int j=0; j <= full_time; j++){
         if(visit.at(i-1).at(j)>0){
            visit.at(i).at(j)=1;
            visit.at(i).at(j + T.at(i))=1;
         }
      }
   }


  for(int i=half_time; i<=full_time; i++){
    if(visit.at(N-1).at(i)>0){
      cout << i << endl;
      break;
    }
  }
}