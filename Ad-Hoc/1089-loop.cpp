#include <iostream>
#include <vector>
using namespace std;

int N;
vector <int> H(20000);

int next(int x) {
	return H[(x+1)%N];
}

int prev(int x) {
	return H[(x+N-1)%N];
}

int main() {
	ios_base::sync_with_stdio(false);
	
	int count;
	while(cin >> N && N) {
		count = 0;
		for(int i=0; i<N; i++)
			cin >> H[i];
		
		for(int i=0; i<N; i++) {
			if( H[i] > prev(i) && H[i] > next(i) ) {
				count++;
			}
		}
		cout << count*2 << "\n";
	}
	return 0;
}			
