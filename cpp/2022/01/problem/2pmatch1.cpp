#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath> // sqrt, pow, sin, fabs, cos

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

typedef int FLOW;
const int MAX_V = 100;
const FLOW INF = 100000000;

struct Edge {
    int rev, from, to;
    FLOW cap, icap;
    Edge(int r, int f, int t, FLOW c) : rev(r), from(f), to(t), cap(c), icap(c) {}
    friend ostream& operator << (ostream& s, const Edge& E) {
        if (E.cap > 0) return s << E.from << "->" << E.to << '(' << E.cap << ')';
        else return s;
    }
};

struct Graph {
    int V;
    vector<Edge>list[MAX_V];

    Graph(int n = 0) : V(n) { for (int i=0; i<MAX_V; ++i) list[i].clear();}
    void init(int n=0) { V=n; for (int i=0; i<MAX_V; ++i) list[i].clear();}
    void resize(int n=0) { V = n;}
    void reset() { for (int i=0; i<V; ++i) for (int j=0; j<list[i].size(); ++j) list[i][j].cap = list[i][j].icap;}
    inline vector<Edge>& operator [] (int i) { return list[i]; }

    Edge &redge(Edge e) {
        if (e.from != e.to) return list[e.to][e.rev];
        else return list[e.to][e.rev + 1];
    } 

    void addedge(int from, int to, FLOW cap) {
        list[from].push_back(Edge((int)list[to].size(), from, to, cap));
        list[to].push_back(Edge((int)list[from].size() - 1, to, from, 0));
    }
};

static int level[MAX_V];
static int iter[MAX_V];

void dibfs(Graph &G, int s) {
    for (int i=0; i<MAX_V; ++i) level[i] = -1;
    level[s] = 0;
    queue<int> que;
    que.push(s);
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for (int i=0; i<G[v].size(); ++i) {
            Edge &e = G[v][i];
            if (level[e.to] < 0 && e.cap > 0) {
                level[e.to] = level[v] + 1;
                que.push(e.to);
            }
        }
    }
}

FLOW didfs(Grafh &G, int v, int t, FLOW f) {
    if (v == t) return f;
    for (int &i = iter[v]; i < G[v].size(); ++i) {
        Edge &e = G[v][i], &re = G.redge(e);
        if (level[v] < level[e.to] && e.cap > 0) {
            FLOW d = didfs(G, e.to, t, min(f, e.cap));
            if (d > 0) {
                e.cap -= d;
                re.cap += d;
                return d;
            }
        }
    }
    return 0;
}

FLOW Dinic(Graph &G, int s, int t) {
    FLOW res = 0;
    while (true) {
        dibfs(G, s);
        if (level[t] < 0) return res;
        memset(iter, 0, sizeof(iter));
        FLOW flow;
        while ((flow = didfs(G, s, t, INF)) > 0) {
            res += flow;
        }
    }
}

int main() {
    
    int men[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int women[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int NUM_MEN = 0, NUM_WOMEN = 0;
    cin >> NUM_MEN >> NUM_WOMEN;

    Graph G(NUM_MEN + NUM_WOMEN + 2);

    int S_node = NUM_MEN + NUM_WOMEN;
    int T_node = NUM_MEN + NUM_WOMEN + 1;

    
    return 0;
}
