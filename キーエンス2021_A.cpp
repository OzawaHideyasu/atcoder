#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long ll;

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main(){
   int n;
   cin >> n;
   vector<ll> A(n);
   vector<ll> B(n);
   vector<ll> C(n,0);

   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }
   for(int i = 0; i < n; i++){
      cin >> B.at(i);
   }

   C.at(0) = A.at(0)*B.at(0);
   ll max_a = A.at(0);
   for(int  i= 1;i<n;i++){
      chmax(max_a,A.at(i));
      C.at(i) = max(C.at(i-1),B.at(i)*max_a);
   }

   for(int i = 0; i < n; i++){
      cout << C.at(i) << endl;
   }


}