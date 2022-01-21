#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("listin.txt","r",stdin);
	freopen("listout.txt","w",stdout);
	int n;
	cin>>n;
	int arr[1001];
	for (int i = 0; i < 1001; i++)
	{
		arr[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		int p,q;
		cin>>p>>q;
		arr[p]++;
		arr[q]++;
	}
	int max = 0;
	for (int i = 0; i < 1001; ++i)
	{
		if(arr[i]>max){
			max = arr[i];
		}
	}
	for (int i = 0; i < 1001; ++i)
	{
		if(arr[i]==max)
			cout<<i<<endl;
	}
	return 0;
}