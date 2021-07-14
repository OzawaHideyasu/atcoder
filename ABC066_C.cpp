#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
  ll n;
  cin >> n;
  vector<ll> A(n);
  for(ll i = 0; i < n; i++){
    cin >> A.at(i);
  }
  deque<ll> deq;

  bool IsEven =true;
  for(auto a:A) {
    if(IsEven) {
      deq.push_back(a);
    } else {
      deq.push_front(a);
    }
    IsEven = !IsEven;
  }

  while(!deq.empty()) {
    if(IsEven) {
      cout << deq.front() << " ";
      deq.pop_front();
    } else {
      cout << deq.back() <<" ";
      deq.pop_back();
    }
  }

}