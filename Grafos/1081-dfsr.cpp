#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define pb push_back

vector < priority_queue<int> > adjlist(20);
vector <bool> reached (20);

void DFSr(int u, int deph) {
	while(!adjlist[u].empty()) {
		int v = -adjlist[u].top(); adjlist[u].pop();
		string spc(2*deph,' ');
		cout << spc << u << "-" << v;
		if(!reached[v]) {
			cout << " pathR(G," << v << ")";
			reached[v] = true;
		} cout << endl;
		DFSr(v, deph+1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int C, V, E;

	cin >> C;
	for(int c=1; c<=C; c++) {
		cin >> V >> E;
		reached.assign(V,false);

		int u, v;
		for(int i=0; i<E; i++) {
			cin >> u >> v;
			adjlist[u].push(-v);
		}

		cout << "Caso " << c << ":" << endl;
		bool flag = false;
		for(int i=0; i<V; i++) {
			if(!adjlist[i].empty()) {
				if(flag) cout << endl;
				flag = true;

				reached[i]=true;
				DFSr(i,1);
			}
		}
		cout << endl;
	}
	return 0;
}