#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

//Contributor: utkarsh0124

int main(){
	bool zero = false;
	while(!zero){		
		int n;
		cin>>n;
		if(n==0) zero=true;
		else{
			queue<int> q;
			for(int i=0; i<n; i++){
				int tmp;
				cin>>tmp;
				q.push(tmp);
			}
			
			//solution
			stack<int> lane;
			
			int truck=1;
			
			while(!q.empty()){
				if(q.front()==truck){
				//	cout<<q.front();
					q.pop();
					truck++;
				}
				else if(!lane.empty() && lane.top()==truck){
				//	cout<<lane.top();
					lane.pop();
					truck++;
				}
				else{
					lane.push(q.front());
					q.pop();
				}
			}
			
			bool flag=false;
			while(!lane.empty() && !flag){
				if(lane.top()!=truck) {
					flag=true;
				}
			//	cout<<lane.top();
				lane.pop();
				truck++;
			}
			if(flag) cout<<"no\n";
			else cout<<"yes\n";
		}
	}
	
	return 0;
}
