#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   string S;
   cin >>S;

   queue<int> q;
   for(auto s:S) {
      int i = (int)(s - '0');
      if(q.empty()) {
         q.push(i);
         continue;
      }
      if(i != q.front()) {
         q.pop();
         continue;
      }

      q.push(i);

   }
   cout << S.size() - q.size() << endl;
}