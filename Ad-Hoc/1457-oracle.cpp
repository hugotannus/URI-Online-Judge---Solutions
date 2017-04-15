#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	long long T, N, k;
	char fat[25];

	cin >> T;
	while(T--) {
		scanf("%lld%s",&N,fat);
		k = strlen(fat);
		long long ans = 1;
		for(int x=N; x>0; x-=k) ans *= x;

		printf("%lld\n", ans);
	}
	return 0;
}