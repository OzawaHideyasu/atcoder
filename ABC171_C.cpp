#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ull n;
  cin >> n;
  deque<char> deq;

  while(n > 0) {
    n--;
    deq.push_front(char('a' + n%26));
    n /= 26;

  }

  for(auto d:deq) {
    cout << deq.front();
    deq.pop_front();
  }

}