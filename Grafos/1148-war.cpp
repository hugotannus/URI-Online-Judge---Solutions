#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

#define ii pair< int, int >
#define vii vector< ii >
#define INF 0x3f3f3f
#define st first
#define nd second
vector < vector<int> > matrix;
int N;

int search(int s, int t) {
	vector < int > dist(N+1,INF);
	priority_queue < ii > pq;
	
	pq.push(ii(0,s)); dist[s] = 0;
	while(!pq.empty()) {
		ii p = pq.top(); pq.pop();
		int u = p.nd; int d = -p.st;
		if(dist[u] == d) {
			for(int v=1; v<=N; v++) {
				int w = matrix[u][v];
				if(w != INF && dist[u] + w < dist[v]) {
					dist[v] = dist[u] + w;
					pq.push(ii(-dist[v],v));
				}
			}
		}
	}
	return dist[t];
}

int main() {
	ios_base::sync_with_stdio(false);
	int E, K, x, y, h;
	while (cin >> N >> E && N+E) {
		matrix.resize(N+1);
		for(int i=0; i<=N; i++) matrix[i].assign(N+1, INF);

		for(int i=0; i<E; i++) {
			cin >> x >> y >> h;
			
			if(matrix[y][x] < INF)
				matrix[x][y] = matrix[y][x] = 0;
			else
				matrix[x][y] = h;
		}

		cin >> K;

		for(int i=0; i<K; i++) {
			cin >> x >> y;
			int ans = search(x,y);
			if(ans != INF)
				cout << ans << endl;
			else
			 	cout << "Nao e possivel entregar a carta" << endl;
		}
		cout << endl;
	}
	return 0;
}