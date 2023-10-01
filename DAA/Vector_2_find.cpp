// Bucket Sort through

#include <bits/stdc++.h>
using namespace std;


void print(double arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

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

int main()
{
	double a[4]={0.3,0.6,0.4,0.7};
	cout<<"\n \nUnsorted array\n";
	print(a,4);	

	cout<<"\n \n Sorted Array\n";
	bucket(a,4);
	print(a,4);
	return 0;
}
