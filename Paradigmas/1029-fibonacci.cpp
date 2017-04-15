#include <iostream>
#include <cstdio>
using namespace std;

int fibo[50];

void init() {
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i=2; i<50; i++)	
		fibo[i] = fibo[i-1] + fibo[i-2];
}

int main() {
	init();
	int N, x, calls;
	scanf("%d", &N);
	
	while(N--) {
		scanf("%d", &x);
		calls = 2*(fibo[x+1]-1);
		printf("fib(%d) = %d calls = %d\n", x, calls, fibo[x]);
	}
		
	return 0;
}
