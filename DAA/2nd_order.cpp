#include <bits/stdc++.h>
using namespace std;

int mim(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}	
	return min;
}

int second(int a[],int m,int n)
{
	int sum=a[0];
	for(int i=0;i<n;i++)
	{
		int d=abs(m-a[i]);
		if(d==0)
		continue;
		sum=min(sum,d);
	}	
	return sum+m;
}

int main()
{
	int a[3]={11,15,2};
	int i=mim(a,3);
	cout<<second(a,i,3);
}
