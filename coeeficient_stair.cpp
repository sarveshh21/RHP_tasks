#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<array>
#include<queue>
using namespace std;
#define ll unsigned long long int
vector<array<int,10>> ans;
void dfs(int slot,int bal,array<int,10> arr){
	if(slot==1){
		arr[slot-1]=bal;
		ans.push_back(arr);
		return;
	}
	arr[slot-1]=0;
	while(bal>=0){
		dfs(slot-1,bal,arr);
		arr[slot-1]++;
		bal-=slot;
	}
}
void solve(){
	int n,k;
	cin>>n>>k;
	array<int,10> arr;
	dfs(n,k,arr);
	sort(ans.begin(),ans.end());
	for(array<int,10> c:ans){
		for(int i=0;i<n;i++){
			cout<<c[i]<<(i+1==n?"\n":" ");
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc=1;
	while(tc--)
	solve();
}
