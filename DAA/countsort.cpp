#include <bits/stdc++.h>
using namespace std;

void countsort(int a[],int n)
{
	int *c;
	int max = *max_element(a,a+n); // finding max element using inbuilt function
	c = new int[max+1];	          // dynamic array
	
	for(int i=0;i<max+1;i++)
	{
		c[i]=0;                 // initalize whole array by zero
	}
	
	for(int i=0;i<n;i++)
	{
		c[a[i]]++;         // finding the frequency
	}
	
	int i=0,j=0;
	while(i<max+1)
	{
		if(c[i]>0)        // if greater than zero
		{
			a[j++]=i;    // copy the value of index to originaly array
			c[i]--;
		}
		else      
			i++;
	}
}

int main()
{
	int a[6] = {3,3,0,0,5,5};
	countsort(a,6);
	for(int i=0;i<6;i++)
	cout<<a[i]<<" ";
}
