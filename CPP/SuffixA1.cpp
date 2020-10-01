#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main() {
	
	
	vector<string>res;
	map<string,int>m;
	string s;
	int n;
	cin>>n;
	
	while(n--)
	{
		cin>>s;
		for(int i=0; i<s.size(); i++)
		{
			m[s.substr(i,s.size()-i)]=i;
			res.push_back(s.substr(i,s.size()-i));
		}
		for(int i=0; i<res.size(); i++)
		{
			cout<<m[res[i]]<<" ";		
		}
		res.clear();
	}
	return 0;
}
