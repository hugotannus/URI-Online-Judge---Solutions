#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <utility>
using namespace std;

#define ii pair<int,int>
#define st first
#define nd second

vector< ii > vet;

bool compare(ii a, ii b) {
	
}

int main() {
	int N, test=1, x, y;
	
	while(cin >> N && N) {
		vet.clear();
		for(int i=0; i<N; i++) {
			cin >> x >> y;
			vet.push_back(ii(x,y));
		}
		sort(vet.begin(), vet.end(), compare);
		
	}
	return 0;
}