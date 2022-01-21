#include<bits/stdc++.h>
using namespace std;

int main(){
    // freopen("sitin.txt","r",stdin);
    // freopen("sitout.txt","w",stdout);
    int r,s;
    cin>>r>>s;
    int number = r*s;
    int ticket;
    cin>>ticket;
    if(ticket<=number){
        cout<<ticket<<" "<<"0"<<endl;
    }
    else{
        cout<<number<<" "<<ticket-number;
    }
}