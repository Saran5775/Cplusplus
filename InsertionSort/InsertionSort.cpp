// Insertion sort
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
#define loop1(i,a,b) 	for(int i=(a);i<=(b);i++)
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
void insertionSort(vi &v){
	ll n = v.size();
	loop0(i, 1, n){
		ll key  = v[i];
		int j = i-1;
		while(j >= 0 && v[j] > key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}

}
int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	
	ll n;
	cin >> n;
	vi v(n);
	loop0(i,0,n){
		ll x; cin >> x;
		v[i] = x;
	}
	cout<<"Insertion sorting:"<<endl;
	cout<<"Unsorted input array:"<<endl;
	loop0(i,0,n) cout<<v[i]<<" ";
	cout<<endl;
	insertionSort(v);
	cout<<"Sorted resultant array:"<<endl;
	loop0(i,0,n) cout<<v[i]<<" ";
	cout<<endl;
	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}