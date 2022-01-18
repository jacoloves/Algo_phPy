#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf;
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

typedef int FLOW;
typedef int COST;
const int MAX_V = 100;
const COST INF = 100000000;

struct Edge {
    int rev, from, to;
    FLOW cap, icap;
    COST cost;
    Edge(int r, int f, int t, FLOW ca, COST co) : rev(r), from(f), to(t), cap(ca), icap(ca)
};

struct Graph {
    int V;
    vector<Edge> list[MAX_V];

    Graph(int n = 0) : V(n) { for (int i = 0; i < MAX_V; ++i) list [i].clear(); }
    void init(int n = 0) { V = n; for (int i = 0; i < MAX_V; ++i) list[i].clear(); }
    void resize(int n = 0) { V = n; }
    void reset() { for (int i = 0; i < V; ++i) for (int j = 0; j < list[i].size(); ++j) list[i][j].cap = list[i][j].icap; }
    inline vector<Edge>& operator [] (int i) {return list[i];}

    Edge &redge(Edge &e) {
        if (e.from != e.to) return list[e.to][e.rev];
        else return list[e.to][e.rev + 1];
    }

    void addedge(int from, int to, FLOW cap, COST cost) {
        list[from].push_back(Edge((int)list[to].size(), from, to, cap, cost));
        list[to].push_back(Edge((int)list[from].size() - 1, to, from, 0, -cost));
    }
};

COST MinCostFlow(Graph &G, int s, int t, FLOW inif) {
    COST dist[MAX_V];
    int prevv[MAX_V];
    int preve[MAX_V];

    COST res = 0;
    FLOW f = inif;
    while(f > 0) {
        fill(dist, dist + G.V, INF);
        dist[s] = 0;
        while(true) {
            bool update = false;
            for (int v = 0; v < G.V; ++V){
                if (dist[v] == INF) continue;
                for (int i = 0; i < G[V].size(); ++i) {
                    Edge &e = G[v][i];
                    if (e.cap > 0 && dist[e.to] > dist[v] + e.cost) {
                        dist[e.to] = dist[v] +e.cost;
                        prevv[e.to] = v;
                        preve[e.to] = i;
                        update = true;
                    }
                }
            }
            if (!update) break;
        }
        if (dist[t] == INF) return 0;

        FLOW d = f;
        for (int v = t; v != s; v = prevv[v]) {
            d = min(d, G[prevv[v]][preve[v]].cap);
        }
        f -= d;
        res += dist[t] * d;
        for (int v = t; v != s; v = prevv[v]) {
            Edge &e = G[prevv[v]][preve[v]];
            Edge &re = G.redge(e);
            e.cap -= d;
            re.cap += d;
        }
    }
    return res;
}

int main() {

    char workers[5] = { 'A', 'B', 'C', 'D', 'E' };
    int jobs[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int NUM_WORKER = 0, NUM_JOB = 0;
    cin >> NUM_WORKER >> NUM_JOB;

    Graph G(NUM_WORKER + NUM_JOB + 2);

    int S_node = NUM_WORKER + NUM_JOB;
    int T_node = NUM_WORKER + NUM_JOB + 1;

    for (int i = 0; i < NUM_WORKER; ++i) {
        for (int j = 0; j < NUM_JOB; ++j) {
            int gain;
            cin >> gain;

            G.addedge(i, j + NUM_WORKER, 1, -gain);
        }
    }

    for (int i = 0; i < NUM_WORKER; ++i) {
        G.addedge(S_node, i, 2, 0);
    }

    for (int j = 0; j < NUM_JOB; ++j) {
        G.addedge(j + NUM_WORKER, T_node, 1, 0);
    }

    COST res = MinCostFlow(G, S_node, T_node, NUM_JOB);

    cout << "Max Gain: " << -res << endl;

    for (int i = 0; i < NUM_WORKER; ++i) {
        for (auto e : G[i]) {
            if (e.icap == 1 && e.cap == 0) {
                cout << "Worker " << workers[i] << " and " << "Job " << jobs[e.to - NUM_WORKER] << " are matched (gain: " << -e.cost << ")" << endl;
            }
        }
    }

    return 0;
}