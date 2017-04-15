#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N;
	while(cin >> N && N) {
		queue <int> dscrd, remain;
		for(int i=1; i<=N; i++)
			remain.push(i);
		
		while(N > 1) {
			dscrd.push(remain.front());
			remain.pop();
			remain.push(remain.front());
			remain.pop();
			N--;
		}
		bool collon = false;

		cout << "Discarded cards:";
		while(!dscrd.empty()) {
			if(collon) cout << ",";
			cout << " " << dscrd.front();
			dscrd.pop();
			collon = true;
		}
		cout << "\nRemaining card: " << remain.front() << "\n";
		remain.pop();
	}
	return 0;
}
