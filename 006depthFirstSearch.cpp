#include<iostream>
#include<list>

using namespace std;

class Graph {
	int V;
	list<int> *adj;
	bool *visited;
	
	public:
	Graph(int v);
	void addEdge(int src, int dest);
	void DFS(int v);
};

Graph::Graph(int v) {
	V = v;
	adj = new list<int>[v];
	visited = new bool[v];
}

void Graph::addEdge(int src, int dest) {
	adj[src].push_front(dest);
}

void Graph::DFS(int v) {
	visited[v] = true;
	list<int> new_adj = adj[v];
	
	cout << v << " ";
	
	list<int>::iterator i;
	for(i = new_adj.begin(); i != new_adj.end(); ++i) {
		if(!visited[*i])
			DFS(*i);
	}
}

int main() {
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.DFS(0);
	cout << endl;
	return 0;
}