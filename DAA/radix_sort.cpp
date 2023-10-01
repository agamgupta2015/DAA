#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int Max(int arr[], int n)
{
    int max = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


void countSort(int arr[],int n,int exp)
{
    
	int output[n];
	int count[10]={0};
	int i;

	for (i = 0; i<n; ++i)
		++count[(arr[i]/exp)%10];

	for (i = 1; i < 10; ++i)
		count[i] += count[i - 1];

	for (i = 0; i<n; ++i) {
		output[count[(arr[i]/exp)%10]-1] = arr[i];
		--count[(arr[i]/exp)%10];
	}
	
	for (i = 0; i<n; ++i)
		arr[i] = output[i];
}

void radixsort(int arr[], int n)
{
    int m = Max(arr, n);
 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

int main()
{
	int arr[5]={4,1,9,6,9};

	radixsort(arr,5);
	cout << "Sorted character array is ";
	for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    
	return 0;
}


