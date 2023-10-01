#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m;
	cin>>m;
	vector<int>n(m);

	for(int i=0;i<m;i++)
    	cin>>n[i];
	
	for(int i=0;i<m;i++)
	   n.push_back(5);
	
	n.pop_back();
	
	for(int i=0;i<n.size();i++)
		cout<<n[i];
	
}
