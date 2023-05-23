    #include <iostream>
    #include <vector>
    #include <algorithm>
#include <ctime>
#include <unistd.h>
#include <string>
#include <chrono>


    using namespace std;

    using namespace std::chrono;


    #define edge pair<int,int>
     
    class Graph {
    private:
        vector<pair<int, edge>> G; // graph
        vector<pair<int, edge>> T; // mst
        int *parent;
        int V; // number of vertices/nodes in graph
    public:
        Graph(int V);
        void AddWeightedEdge(int u, int v, int w);
        int find_set(int i);
        void union_set(int u, int v);
        void kruskal();
        void print();
    };
    Graph::Graph(int V) {
        parent = new int[V];
     
        //i 0 1 2 3 4 5
        //parent[i] 0 1 2 3 4 5
        for (int i = 0; i < V; i++)
            parent[i] = i;
     
        G.clear();
        T.clear();
    }
    void Graph::AddWeightedEdge(int u, int v, int w) {
        G.push_back(make_pair(w, edge(u, v)));
    }
    int Graph::find_set(int i) {
        // If i is the parent of itself
        if (i == parent[i])
            return i;
        else
            // Else if i is not the parent of itself
            // Then i is not the representative of his set,
            // so we recursively call Find on its parent
            return find_set(parent[i]);
    }
     
    void Graph::union_set(int u, int v) {
        parent[u] = parent[v];
    }
    void Graph::kruskal() {
        int i, uRep, vRep;
        sort(G.begin(), G.end()); // increasing weight
        for (i = 0; i < G.size(); i++) {
            uRep = find_set(G[i].second.first);
            vRep = find_set(G[i].second.second);
            if (uRep != vRep) {
                T.push_back(G[i]); // add to tree
                union_set(uRep, vRep);
            }
        }
    }
    void Graph::print() {
        cout << "Edge :" << " Weight" << endl;
        for (int i = 0; i < T.size(); i++) {
            cout << T[i].second.first << " - " << T[i].second.second << " : "
                    << T[i].first;
            cout << endl;
        }
    }


void init(float x)
{
    // hace cosas: MARISOL!!!!!111oneone
    sleep((int)x);
    return;
}


    int main(int c, char** v) {
        Graph g(6);
        g.AddWeightedEdge(0, 1, 10000000);
        g.AddWeightedEdge(0, 2, 10000000);
        g.AddWeightedEdge(1, 2, 10000000);
        g.AddWeightedEdge(1, 0, 10000000);
        g.AddWeightedEdge(2, 0, 10000000);
        g.AddWeightedEdge(2, 1, 10000000);
        g.AddWeightedEdge(2, 3, 10000000);
        g.AddWeightedEdge(2, 5, 10000000);
        g.AddWeightedEdge(2, 4, 10000000);
        g.AddWeightedEdge(3, 2, 10000000);
        g.AddWeightedEdge(3, 4, 10000000);
        g.AddWeightedEdge(4, 2, 10000000);
        g.AddWeightedEdge(4, 3, 10000000);
        g.AddWeightedEdge(5, 2, 10000000);
        g.AddWeightedEdge(5, 4, 10000000);
        g.kruskal();
        //g.print();

    unsigned long long x = stoull(v[1]);
    
    init(0);

    //time_t t0 = time(0);
    steady_clock::time_point t0 = steady_clock::now();
    //f(0);
    g.kruskal();

    steady_clock::time_point t1 = steady_clock::now();
    //time_t t1 = time(0);

    unsigned long long tiempito = duration_cast<nanoseconds>(t1-t0).count();
    //time_t tiempito = t1-t0;

    
    cout << tiempito << endl;

    return tiempito;

}