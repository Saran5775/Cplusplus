#include <iostream>
#include <vector>
using namespace std;

// finds fibonacci using basic recursion which is exponential
// TC -  O(2^n)
int fibonacciBasicRecursion(int n){
    if(n == 0 or n == 1) return n;
    return fibonacciBasicRecursion(n-1) + fibonacciBasicRecursion(n-2);
}
// finds fibonacci using top down dp
// TC - 2^n
int fibonacciTopDownDP(int n, vector<int>& dp){
    if(n == 0 or n == 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibonacciTopDownDP(n-1, dp) + fibonacciTopDownDP(n-2, dp);
}
    
// find fibonacci using bottom up dp
// TC - O(N)
// SC - O(1)
int fibonacciBottomUp(int n){
    int a = 0, b = 1,c = 0;
    for(int i = 2; i <=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main(int argc, const char * argv[]) {
    cout<<"Enter the value of N"<<endl;
    int n; cin >> n;
    cout<<fibonacciBottomUp(n)<<endl;
    cout<<fibonacciBasicRecursion(n)<<endl;
    vector<int> dp(n+1, -1);
    cout<<fibonacciTopDownDP(n, dp)<<endl;
    return 0;
}
