#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("encyin.txt","r",stdin);
	freopen("encyout.txt","w",stdout);
	int n,q;
	cin>>n>>q;
	int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
   
    for(int j=0;j<q;j++){
    	int number;
        cin>>number;
        cout<<arr[number-1]<<endl;
    }
	return 0;
}