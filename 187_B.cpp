#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

   int n;
   cin >> n;

   vector<double> X(n);
   vector<double> Y(n);
   
   for (int i = 0; i < n; i++) {
       cin >> X.at(i) >> Y.at(i);
    }
    int cnt =0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n;j++) {
            double slope = (Y.at(j)-Y.at(i))/(X.at(j)-X.at(i));
            if(abs(slope) <= 1) {
                cnt++;
            }
        }
    }

   cout << cnt << endl;

}