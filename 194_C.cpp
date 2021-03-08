#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

int main(){
   int n;
   cin >> n;
   vector<ll> A(n);

   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }

   vector<ll> SumA(n);
   vector<ll> SumAA(n);
   ll a = 0;
   ll aa =0;
   for(int i = 0; i < n; i++){
      a += A.at(i);
      aa += pow(A.at(i),2);
      SumA.at(i) = a;
      SumAA.at(i) = aa;
   }
   ll sum =0;
   for(int i = 1; i < n; i++){
      sum += (i)*pow(A.at(i),2) -2*A.at(i)*SumA.at(i-1) + SumAA.at(i-1);
   }

   cout << sum << endl;

}