//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n,c;
//	cin>>n>>c;
//	
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	string student[c],ch1[c],ch2[c],ch3[c];
//	string str[c];
//	double per[c];
//	//stringstream ss(str);
//	vector<int> v[c];
//	for(int i=0;i<c;i++)
//	{
//		cin>>str[i];
//		stringstream ss(str[i]);
//	    for (int i; ss >> i;) {
//	        v[i].push_back(i);
//	        if (ss.peek() == ',')
//	            ss.ignore();
//	    }
//	}
//	vector<int>::iterator j;
//	for (int t = 0; t < c; ++t) {
//        for (auto x : v[t])
//            cout << "-> " << x;
//        printf("\n");
//    }
//	
////    for (int i = 0; i < c-1; i++)
////	{
////    	for (int j = 0; j < c-i-1; j++)
////		{
////        	if (per[j] < per[j+1])
////        	{
////	            swap(per[j],per[j+1]);
////	            swap(ch1[j],ch1[j+1]);
////	            swap(student[j],student[j+1]);
////	            swap(ch2[j],ch2[j+1]);
////	            swap(ch3[j],ch3[j+1]);
////        	}
////    	}
////	}
////	int p=0;
////	for(int i=0;i<a[0];i++)
////	{
////		if(p<c)
////		cout<<student[p]<<" "<<ch1[i];
////		p++;
////		cout<<endl;
////	}
////	for(int i=0;i<a[1];i++)
////	{
////		if(p<c)
////		cout<<student[p]<<" "<<ch2[i];
////		p++;
////		cout<<endl;
////	}
////	for(int i=0;i<a[2];i++)
////	{
////		if(p<c)
////		cout<<student<<" "<<ch3[i];
////		p++;
////		cout<<endl;
////	}
////	
//}

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
 
vector<int> split(const string &str, char sep)
{
    vector<int> tokens;
 
    int i;
    stringstream ss(str);
    while (ss >> i) {
        tokens.push_back(i);
        if (ss.peek() == sep) {
            ss.ignore();
        }
    }
 
    return tokens;
}
 
int main()
{
    string str = "1,2,3,4,5";
    char sep = ',';
 
    vector<int> tokens = split(str, sep);
    for (auto &i: tokens) {
        cout << i << ' ';
    }
 
    return 0;
}

