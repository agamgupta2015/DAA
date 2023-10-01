#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V; 
	list<int> *adj; 
public:
	Graph(int V); 
	void addEdge(int v, int w); 
	void DFS(int v); 
	void DFSUtil(int s, bool visited[]);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); 
}


void Graph::DFSUtil(int s, bool visited[])
{
	stack<int> stack;
	stack.push(s);

	while (!stack.empty())
	{
		int s = stack.top();
		stack.pop();
		if (!visited[s])
		{
			cout << s << " ";
			visited[s] = true;
		}
      list<int>::iterator i;
		for ( i = adj[s].begin(); i != adj[s].end(); ++i)
			if (!visited[*i])
				stack.push(*i);
	}
}

void Graph::DFS(int V)
{
	bool *visited = new bool[V];

	for (int i = 0; i < V; i++)
    {
        visited [i] = false;
    
		if (!visited[i])
			DFSUtil(i, visited);
}

}

int main()
{
	Graph g(5);
	g.addEdge(1, 0);
	g.addEdge(2, 1);
	g.addEdge(3, 4);
	g.addEdge(4, 0);

	cout << "Following is Depth First Traversal\n";
	g.DFS(5);

	return 0;
}
