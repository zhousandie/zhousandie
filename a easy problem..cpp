. #pragma GCC optimize(2)
#include<bits/stdc++.h>
#define FASTER ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rep(x,y,z) for(int x=(y);x<=(z);x++)
#define reps(x,y,z) for(int x=(y);x<(z);x++)
#define ford(x,y,z) for(int x=(y);x>=(z);x--)
#define fords(x,y,z) for(int x=(y);x>(z);x--)
#define VI vector<int>
#define debug(x) cout << endl << "debug=" << "值: "  << x << endl
#define endl "\n"
#define int ll
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const long long N = 2e5+5,INF = 1e9+7;
int n,t,m,x,k;
int p,q;

struct Node{
	int st,end;
	int root;
};

int a[N],v[N];
bool f[N];

//vector<Node> lu;
vector< Node > mp[N];

void slove(){
	cin >> n >> m >> q;
	int val;
	for( int i = 1; i <= n; i++){
		cin >> val;v[i] = val;
	}
	int l , r , vl ;
	for(int i = 1;i <= m; i++){
		cin >> l >> r >> vl;
		Node tp;tp.st = l , tp.end = r , tp.root = vl;
		mp[l].push_back(tp);
		tp.st = r , tp.end = l;
		mp[r].push_back( tp );
		
	}
	return ; 
}

signed main(){
	t = 1;
	FASTER;
	//cin >> t;
	while(t--){
		slove();
	}
	return 0;
}
