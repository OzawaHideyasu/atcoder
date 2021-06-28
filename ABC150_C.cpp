#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
   int n;
   cin >> n;

   vector<int> P(n);
   for(int i = 0; i < n; i++){
      cin >> P.at(i);
   }

   vector<int> Q(n);
   for(int i = 0; i < n; i++){
      cin >> Q.at(i);
   }
   vector<int> v(n);
   iota(v.begin(),v.end(),1);
   
   ll cnt = 0;
   ll p = 0;
   ll q = 0;
   do{
      if(P == v) p = cnt;
      if(Q == v) q = cnt;
      cnt++;

      if(p*q != 0) break;

   }while(next_permutation(v.begin(),v.end()));

   cout << abs(p -q) << endl;

}