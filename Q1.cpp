#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std; // Bring the entire std namespace into scope

const int maxN = 2e5+5;
const int MOD = 1e9+7;
const int INF = 1e9+5;

#define pi pair<int,int>
#define si set<int>
#define spi set<pi>
#define msi multiset<int>
#define mspi multiset<pi>
#define mi map<int,int>
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>

bool compare(pair<int,int> a, pair<int,int> b){
	int x = a.first + a.second;
	int y = b.first + b.second;
	return x < y;
}

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n+10);
    for(int i = 1; i <= n; i++){
        cin >> nums[i];
    }
    int minimum = 1e9+10;
    int maximum;
    for(int i = 1; i < n; i++){
        maximum = max(nums[i], nums[i+1]);
        minimum = min(minimum, maximum);
    }
    cout << minimum - 1 << "\n";
}

int main(){
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
		solve();
	}
}
