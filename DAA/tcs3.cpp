#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m1;
	cin>>m1;
	int m2;
	cin>>m2;
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int sum=0;
	int sum1=0;
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		sum = sum+a[i];
		else
		sum1 = sum1+a[i];
	}
	//cout<<sum<<" "<<sum1<<endl;
	cout<< max(sum*m1,sum1*m2);
}
