#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0;
	int a[5]={2,2,5,5,9};
	for(int i=0;i<4;i++)
	{
		sum = a[i]+a[i+1];	
		if(sum==14)
		{
			cout<<a[i]<<" "<<a[i+1];
			break;
		}
		sum = min(sum,a[i]);
	}
}
