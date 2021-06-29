#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
    }
    ll ans = 0;
    for (int s = 0; s < N; ++s) {
        seen.assign(N, false);
        dfs(G, s);
        for (int t = 0; t < N; ++t) {
            if (seen[t]) ans++;
        }
    }
    cout << ans << endl;
}#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
    }
    ll ans = 0;
    for (int s = 0; s < N; ++s) {
        seen.assign(N, false);
        dfs(G, s);
        for (int t = 0; t < N; ++t) {
            if (seen[t]) ans++;
        }
    }
    cout << ans << endl;
}