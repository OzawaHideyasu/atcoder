#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll n;
  cin >> n;
  vector<ll> A(n);
  for(int i = 0; i < n; i++){
    cin >> A.at(i);
  }
  bool existGray = false;
  bool existBrown = false;
  bool existGreen = false;
  bool existLiteBlue = false;
  bool existBlue = false;
  bool existYellow = false;
  bool existOrange = false;
  bool existRed = false;

  ll cnt = 0;
  ll cntOverRed = 0;
  for(auto a:A) {
    if(a<=399) {
      if(!existGray) cnt++;
      existGray = true;
    } else if(a <= 799) {
      if(!existBrown) cnt++;
      existBrown = true;
    }else if(a <= 1199) {
      if(!existGreen) cnt++;
      existGreen = true;
    }else if(a <= 1599) {
      if(!existLiteBlue) cnt++;
      existLiteBlue = true;
    }else if(a <= 1999) {
      if(!existBlue) cnt++;
      existBlue = true;
    }else if(a <= 2399) {
      if(!existYellow) cnt++;
      existYellow = true;
    }else if(a <= 2799) {
      if(!existOrange) cnt++;
      existOrange = true;
    }else if(a <= 3199) {
      if(!existRed) cnt++;
      existRed = true;
    } else if(a >= 3200) {
      cntOverRed++;
    }
  }
  if(cnt == 0 && cntOverRed != 0) {
    cnt++;
    cntOverRed--;
  }
  cout << cnt << " " << cnt + cntOverRed <<endl;
}