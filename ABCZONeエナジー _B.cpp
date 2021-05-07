 #include <bits/stdc++.h>
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
   double D ,H;
   cin >> D >> H;
   D *= 1000;
   H *= 1000;
    double max_ratio = H/D;

    double max_d = D;
    double max_h = H;

   double ans = 0;
   for(int i = 0; i < n; i++){
       double d,h;
       cin >> d >> h;
       d *= 1000;
       h *= 1000;
       double ratio = h/d;
       chmax(max_ratio,ratio);
       if(ratio == max_ratio) {
           max_d = d;
           max_h = h;
       }
   }

   if(max_ratio != H/D) {
       ans = (-max_d*H + D*max_h)/(D-max_d);
       ans /= 1000;
   }
   cout << setprecision(15);
   cout << ans << endl;

}