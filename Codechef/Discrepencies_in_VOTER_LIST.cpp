#include <bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int total_elements = n1+n2+n3;
	int arr[total_elements];
	for (int i = 0; i < total_elements; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+ total_elements);
	vector<int> v;
	for (int i = 0; i < total_elements; )
	{
		int j= i;
		int count = 0;
		while(j<total_elements && arr[j]==arr[i]){
			count++;
			j++;
		}
		if(count>=2){
			v.push_back(arr[i]);
		}
		i=j;
	}
	cout<<v.size()<<endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<endl;
	}

	return 0;
}