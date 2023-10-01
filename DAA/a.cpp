#include <iostream>
using namespace std;

int fun(int n){
	
	if(n==1)
		return n;
	else
		return fun(n-1)+n;
}
int main(){
	cout<<fun(5)<<endl;
}
