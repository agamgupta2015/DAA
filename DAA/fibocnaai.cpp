//fibconaaci numbers program.

#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
	int pos1 = 0;
	int pos2 = 1;
	if(n == 1)
	{
		cout<<pos1<<" ";	
	}	
	if(n == 2)
	{
		cout<<pos1<<" "<<pos2<<" ";
	}
	else
	{
		cout<<pos1<<" "<<pos2<<" ";
		int i=3;
		while(i<=n)
		{
			int temp = pos2;
		    pos2 = pos1+pos2;
		    pos1 = temp;
			i++;
			cout<<pos2<<" ";
		}
		//cout<<pos1<<" ";
	}
	return ;
}

//recursive function 

int fibg(int g)
{
	if(g==0||g==1)
		return g;
	else
		return fibg(g-1)+fibg(g-2);	
}

int main()
{
	fib(10);
	cout<<"\n";
	cout<<fibg(8);
}
