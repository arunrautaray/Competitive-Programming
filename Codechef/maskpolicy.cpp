#include<bits/stdc++.h>
using namespace std;
int maskpolicy(int N,int A){
     return min(A,N-A);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n>>a;
		int ans = maskpolicy(n,a);
		cout<<ans<<endl;
	}
	return 0;
}