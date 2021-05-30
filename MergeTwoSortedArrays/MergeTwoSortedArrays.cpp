// Merging two sorted Arrays in single sorted array
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
// merging using two pointer approach
void mergeTwoSortedArrays(vi &a, vi &b, vi &c, int m, int n){
	int ptr1 = 0, ptr2 = 0, idx = 0;
	while(ptr1 < m && ptr2 < n){
		if(a[ptr1] <= b[ptr2]){
			c[idx] = a[ptr1];
			ptr1++;
			idx++;
		}else{
			c[idx] = b[ptr2];
			ptr2++;
			idx++;
		}
	}
	while(ptr1 < m){
		c[idx] = a[ptr1];
		idx++; ptr1++;
	}
	while(ptr2 < n){
		c[idx] = b[ptr2];
		idx++; ptr2++;
	}
}
int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	cout<<"Merging two sorted Arrays in single sorted array"<<endl;
	int m , n;
	cin >> m >> n;
	vi a(m);
	vi b(n);
	vi c(n+m);
	loop0(i, 0, m){
		cin >> a[i];
	}
	loop0(i,0,n){
		cin >> b[i];
	}
	mergeTwoSortedArrays(a, b, c, m, n);
	loop0(i,0,m+n)cout<<c[i]<<" ";
	cout<<endl;
	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}