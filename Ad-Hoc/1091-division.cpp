#include <iostream>
using namespace std;

int main() {
	int K, N, M, X, Y;

	while(cin >> K && K) {
		cin >> N >> M;
		while(K--) {
			cin >> X >> Y;
			if(X == N || Y == M) cout << "divisa" << endl;
			else {
				if(X > N && Y > M) cout << "NE" << endl;
				if(X > N && Y < M) cout << "SE" << endl;
				if(X < N && Y > M) cout << "NO" << endl;
				if(X < N && Y < M) cout << "SO" << endl;
			}
		}
	}
	return 0;
}