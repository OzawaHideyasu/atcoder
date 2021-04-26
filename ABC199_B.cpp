 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}
template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main(){
   int n;
   cin >> n;
   vector<int> A(n);
   vector<int> B(n);

   for(int i = 0; i < n; i++){
      cin >> A.at(i);
   }

   for(int i = 0; i < n; i++){
      cin >> B.at(i);
   }

   sort(A.begin(), A.end(), greater<int>());
   sort(B.begin(), B.end());

   int ans = B.at(0) -A.at(0) +1;

   if(ans < 0) {
      ans = 0;
   }

   cout << ans << endl;

}