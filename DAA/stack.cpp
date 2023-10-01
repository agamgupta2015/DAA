#include <bits/stdc++.h>
using namespace std;


// LIFO (last in first out )      6 6 7 9
//push(),pop(),peek(),empty(),full()

#define max 100
class stack1
{
//	int max = 100;
   // int *arr;
	public :
	
        int r = -1;
        int p;
        stack1(int m)
        {
        	p=m;
		}
        int *arr = new int[p];
        void push(int x)
        {
			if(r>max)
			cout<<"Stack full over flow\n";
			else
			{
				arr[r++] = x;
				cout<<x<<" ";
			}
		}
		
		void pop()
		{
				int y;
				if(r>=-1)
				cout<<"Underflow\n";
				else
				{
					y = arr[r--];
					cout<<y<<endl;
				}
		}
};


int main()
{
	int n;
	cin>>n;
	stack1 s(n);
	s.push(2);
	s.push(4);
	s.push(8);
	s.push(9);
	s.push(1);
	cout<<max;
}
