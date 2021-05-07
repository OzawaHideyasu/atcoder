 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n;
   cin >> n;
   vector<ll> C1(n);
   vector<ll> C2(n);

   bool c1_flg = true;
   bool c2_flg = true;

   for(int i = 0; i < n; i++){
      int c,p;
      cin >> c >>p;

      if(c == 1) {
        if(c1_flg) {
            C1.at(i) = p;
            c1_flg = false;
            if(i != 0) {
                C2.at(i) = C2.at(i-1);
            }
            continue;
        }
        C1.at(i) += C1.at(i-1) +p;
        C2.at(i) = C2.at(i-1);
      } else if(c == 2) {
         if(c2_flg) {
            C2.at(i) = p;
            c2_flg = false;
            if(i != 0) {
                C1.at(i) = C1.at(i-1);
            }
            continue;
         }
         C2.at(i) += C2.at(i-1) + p;
         C1.at(i) = C1.at(i-1);
      }
   }

   ll q;
   cin >> q;
   vector<int> L(q);
   vector<int>R(q);
   for(int i = 0; i < q; i++){
      cin >> L.at(i) >> R.at(i);
   }

   for(int i = 0; i < q; i++){

      ll ans_c1 = C1.at(R.at(i)-1);
      ll ans_c2 = C2.at(R.at(i)-1);

      if(L.at(i) != 1) {
        ans_c1 -= C1.at(L.at(i)-2);
        ans_c2 -= C2.at(L.at(i)-2);
      }
      
      cout << ans_c1 << " " << ans_c2 << endl;
   }

}