#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector< vector<int> > table;

int main() {
	int N, m, d, NN;

	while(scanf("%d",&N) && N) {
		table.resize(N);
		for(int i=0; i<N; i++) table[i].assign(N,0);

		NN = N;
		for(int k = 0; k<N; k++, N--)
			for(int i=k; i<N; i++)
				for(int j=k; j<N; j++) table[i][j]++;

		bool flag;
		for(int i=0; i<NN; i++) {
			flag = false;
			for(int j=0; j<NN; j++) {
				if(flag) printf(" ");
				printf("%3d", table[i][j]);
				flag = true;
			}
			puts("");
		}
		puts("");
	}
	return 0;
}
