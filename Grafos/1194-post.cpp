#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

string in, pos;
queue <char> pre;

void found_pos(int lb, int ub, int j, int k) {
	char c = pre.front(); pre.pop();
	pos[ub] = c;

	if(lb == ub) return;
	int p = in.find_first_of(c,j);

	int mid = lb + p - j;

	found_pos(lb, mid-1, j, p-1);
	found_pos(mid, ub-1, p+1, k);
}

int main () {
	ios_base::sync_with_stdio(false);
	int C, N;
	string str;

	while(C--) {
		cin >> N >> str >> in;
		for(int i=0; i<N; i++) pre.push(str[i]);

		pos.resize(N);
		found_pos(0,N-1,0,N-1);

		cout << pos << endl;
	}
	return 0;
}