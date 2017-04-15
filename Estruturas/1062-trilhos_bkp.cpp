#include <iostream>
#include <stack>
#include <queue>
#include <cstdio>
using namespace std;

#define MAX 1000

int main() {
	ios_base::sync_with_stdio(false);
	
	int n, k,	B[MAX];
	stack <int> M;
	
	while (scanf("%d", &n) && n) {
		while(scanf("%d", &k) && k) {
			while(!M.empty()) M.pop();
			
			B[0] = k;
			for(int i=1; i<n; i++) {
				scanf("%d", &B[i]);
			}
			
			k = 0;
			
			for(int i=1; i<=n; i++) {
				M.push(i);
				while(!M.empty() && M.top() == B[k]) {
					M.pop();
					k++;
				}
				if(!M.empty() && M.top() > B[k]) break;
			}
						
			if(k >= n) puts("Yes");
			else 	 puts("No");
		}
		puts("");
	}
	return 0;
}
		
