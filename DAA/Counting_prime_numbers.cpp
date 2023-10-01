#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
	
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return true;
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	
	int c=0;
	int d=0;
	
	int p=n;
	
	while(n!=0)
	{
		p=p%10;
		n=n/10;
		p=n;
		if(prime(p))
		c++;
		else
		d++;
	}
	cout<<c<<" "<<d;
}
