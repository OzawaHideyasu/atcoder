 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double ManhattanDistance(ll n, vector<ll> X) {
   double MD = 0;
   for(int i = 0; i < n; i++){
      MD += abs(X.at(i));
   }
   return MD;
}
double EuclideanDistance(ll n, vector<ll> X) {
   double ED = 0;
   for(int i = 0; i < n; i++){
      ED += pow(X.at(i), 2);
   }
   return sqrt(ED);
}
double ChebyshevDistance(ll n, vector<ll> X) {
   
   sort(X.begin(), X.end(), greater<ll>());
   double CD = X.at(0);
   return CD;
}

int main(){
   ll n;
   cin >> n;
   vector<ll> X(n);

   for(int i = 0; i < n; i++){
      cin >> X.at(i);
   }

   double MD = ManhattanDistance(n,X);
   double ED = EuclideanDistance(n,X);
   double CD = ChebyshevDistance(n,X);

   cout << MD << endl;
   cout << ED << endl;
   cout << CD << endl;

}