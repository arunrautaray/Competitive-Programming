#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int cum1 = 0;
	int cum2 = 0;
	int max_lead_player = 1;
	int max_lead = 0;
	while(n--)
	{
		int s1,s2;
		cin>>s1>>s2;
		cum1 += s1;
		cum2 += s2;
		int current_lead = 0;
		int current_lead_player = 1;
		if(cum1>=cum2){
			current_lead = cum1 - cum2;
		}
		else{
			current_lead = cum2-cum1;
			current_lead_player = 2;
		}
		if (current_lead>max_lead)
		{
			max_lead = current_lead;
			max_lead_player = current_lead_player;		
		}
	}
	cout<<max_lead_player<<" "<<max_lead<<endl;
	return 0;
}