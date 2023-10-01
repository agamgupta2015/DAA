#include <bits/stdc++.h>
using namespace std;

vector <int> a[100];
vector <int> b[100];

// to insert  in graph

void insert(int u,int v)
{
	a[u].push_back(v);		
}

// to breadth of search

void bfs(int n)
{
	queue<int> q;
	
	bool *visted  = new bool[9];
	for(int i=0;i<n;i++)
	{
		visted[i] = false; 	
	}
	
	visted[n] = true;
	q.push(n);
	vector <int>::iterator i;
	while(!q.empty())
	{
		n = q.front();
		cout<< n <<" ";
		q.pop();
		
		for (i = a[n].begin(); i!=a[n].end(); ++i)
        {
            if (!visted[*i])
            {
                visted[*i] = true;
                q.push(*i);
            }
        }	
	}	
}

// Depth of search

void dfs(int n)
{
	bool *visted = new bool[9];
	visted[n] = true;
	vector <int>::iterator i;
		cout << n <<" ";
		
		for (i = a[n].begin(); i!=a[n].end(); ++i)
        {
            if (!visted[*i])
            dfs(*i);	
		}	
}

int main()
{
	insert(1,2);
	insert(1,8);
	insert(2,5);
	insert(2,4);
	insert(4,6);
	
//	bfs(2);
	dfs(1);
}
