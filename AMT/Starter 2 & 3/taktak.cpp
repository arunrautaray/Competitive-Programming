#include <bits/stdc++.h>
using namespace std;
bool canDistributeEqually(int fruits){
	if(fruits%11==1)
		return true;
	else
		return false;
}
int main(){
	freopen("taktakin.txt","r",stdin);
	freopen("taktakout.txt","w",stdout);
	int fruits;
	cin>>fruits;
	int fullmoons = 0;
	while(!canDistributeEqually(fruits)){
		fullmoons+=1;
		fruits*=2;
	}
	cout<<fullmoons<<" "<<fruits<<endl;
	return 0;
}