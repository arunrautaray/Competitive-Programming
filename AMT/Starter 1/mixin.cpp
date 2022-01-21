#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("mixin.txt","r",stdin);
    freopen("mixout.txt","w",stdout);
    int n,d,a,b;
    cin>>n>>d;
    a = n/d;
    b = n%d;
    if(b==0){
        cout<<a<<endl;
    } else{
        cout<<a<<" "<<b<<"/"<<d<<endl;
    }
    return 0;


}