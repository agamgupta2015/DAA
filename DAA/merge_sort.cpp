#include <bits/stdc++.h>
using namespace std;
 int c=0;
void merge(int a[],int l,int mid,int h)
{
	int i=l;
	int j=mid+1;
	int k=l;
	int b[h+1];
	while(i<=mid && j<=h)
	{
		if(a[i]<a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
			
			c++; //no of comparsion.
	}
	for(;i<=mid;i++)
		b[k++] = a[i];
	for(;j<=h;j++)
		b[k++] = a[j];
		
	for(int i=l;i<=h;i++)
		a[i] = b[i];
}

void merge_sort(int a[],int l,int h)
{
	if(l<h)
	{
		int mid = (l+h)/2;
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,h);
		merge(a,l,mid,h);
    }
}

void Print(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";	
}

int main()
{
	int A[] = {5,4,3,2,1};
    int n = sizeof(A)/sizeof(A[0]);
 
    Print(A, n);
    cout<<endl;
    merge_sort(A, 0, n-1);
    Print(A, n);
    cout<<endl;
    cout<<c;
}
