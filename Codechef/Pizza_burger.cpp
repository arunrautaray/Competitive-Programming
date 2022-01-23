#include<bits/stdc++.h>
using namespace std;
void pizzaburger(int x , int y, int z){
	if(x>=y){
		cout<<"PIZZA"<<endl;
	}
    else if(x>=z){
    	cout<<"BURGER"<<endl;
    }
    else {
    	cout<<"NOTHING"<<endl;
    }
    return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		pizzaburger(x,y,z);
	}
	return 0;
}