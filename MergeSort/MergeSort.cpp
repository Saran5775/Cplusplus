// Merge sort - Recursive
// TC -  nlogn
// SC - n
// stable sorting and not inplace sorting
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
void merge(vi &v, ll l, ll mid, ll r){
	ll lsize = mid-l+1;
	ll rsize = r-mid;
	vi larr(lsize);
	vi rarr(rsize);
	loop0(i, 0, lsize){
		larr[i] = v[l+i];
	}
	loop0(i,0,rsize){
		rarr[i] = v[mid+1+i];
	}
	ll ptr1 = 0, ptr2 = 0, idx = l;
	while(ptr1 < lsize && ptr2 < rsize){
		if(larr[ptr1] <= rarr[ptr2]){
			v[idx] = larr[ptr1];
			ptr1++;
			idx++;
		}else{
			v[idx] = rarr[ptr2];
			ptr2++;
			idx++;
		}
	}
	while(ptr1 < lsize){
		v[idx] = larr[ptr1];
		ptr1++;
		idx++;
	}
	while(ptr2 < rsize){
		v[idx] = rarr[ptr2];
		ptr2++;
		idx++;
	}

}
void mergeSort(vi &v, ll l, ll r){
	ll size = r-l+1;
	if(size == 1) return;
	ll m = mid(l,r);
	mergeSort(v, l, m);
	mergeSort(v, m+1, r);
	merge(v, l, m, r);
}
int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	
	ll n;
	cin >> n;
	vi v(n);
	loop0(i,0,n){
		cin >> v[i];
	}
	cout<<"Merge sorting:"<<endl;
	cout<<"Unsorted input array:"<<endl;
	loop0(i,0,n) cout<<v[i]<<" ";
	cout<<endl;
	mergeSort(v,0,v.size()-1);
	cout<<"Sorted resultant array:"<<endl;
	loop0(i,0,n) cout<<v[i]<<" ";
	cout<<endl;
	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;
}