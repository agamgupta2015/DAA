#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int contrib , project;
	cin >> contrib >> project;
	
	string s[contrib];
	int n;
	int a[contrib];
	int *b;
	string h[contrib];
	
	for(int i=0;i<contrib;i++)
	{
		cin >> s[i] >> a[i];
		b = new int[a[i]];
		for(int j=0;j<a[i];j++)
		{
			cin >> h[j] >> b[i];
		}
	}
	
	string d[project];
	int u[project];
	int score[project];
	int best[project];
	int roles[project];

	string l[project];
	int p[project];

	for(int i=0;i<project;i++)
	{
		cin >> d[i] >> u[i] >> score[i] >> best[i] >> roles[i];

		for(int j=0;j<roles[i];j++)
		{
			cin >> l[j] >> p[i];
		}
	}
}
