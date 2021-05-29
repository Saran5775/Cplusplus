// Sum of elements in an array
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define endl			"\n"
#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				make_pair
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define loop0(i,a,b)	for(int i=(a);i<(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	

void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}
//finds the sum of an array (Iterative )
ll findSum(vi &v){
	int sum = 0;
	loop0(i, 0, v.size()){
		sum+=v[i];
	}
	return sum;
}

//finds the sum of array (Recursion)
ll findSumRecursion(vi &v, ll n){
	if(n == 0) return  0;
	return findSumRecursion(v, n-1) + v[n-1];
}

//finds the sum of array using accumulate inbuilt function in STL
ll findSumUsingBuiltIn(vi &v){
	return accumulate(v.begin(), v.end(),0);
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	ll n; cin >> n;
	vi v(n);
	loop(i,0,n){
		cin >> v[i];
	}
	cout<<findSum(v)<<endl;
	cout<<findSumRecursion(v,v.size())<<endl;
	cout<<findSumUsingBuiltIn(v)<<endl;
	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}