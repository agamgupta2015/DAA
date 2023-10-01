#include <bits/stdc++.h>
using namespace std;

void bucket(double arr[],int n)
{
	vector<double> a[n];
	
	for(int i=0;i<n;i++)
	{
		int h = n*arr[i];
		a[h].push_back(arr[i]);	
	}	
	
	for(int i=0;i<n;i++)
	{
		sort(a[i].begin(),a[i].end());
	}
	int id=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			arr[id++]=a[i][j];
		}
	}
	return ;
}

void print(double arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";	
	}		
}

int main()
{
	double a[4]={0.3,0.5,0.8,0.9};
	bucket(a,4);
	print(a,4);
}
