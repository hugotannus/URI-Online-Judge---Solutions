#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, d;
	bool flag;
	while(scanf("%d", &N) && N){
		for(int i=0; i<N; i++) {
			flag = false;
			for(int j=0; j<N; j++){
				if(flag) printf(" ");
				d = abs(j-i)+1;
				printf("%3d", d);
				flag = true;
			}
			puts("");
		}
		puts("");
	}
	return 0;
}