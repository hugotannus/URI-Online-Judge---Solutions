#include <iostream>
#include <stack>
#include <queue>
#include <cstdio>
using namespace std;

#define MAX 1000

int main() {
	ios_base::sync_with_stdio(false);
	
	int h, qt, k, maior, n;
	bool falhou, flag;
	
	while (scanf("%d", &n) && n) {
		//~ cout << "n: " << n << endl;
		while(scanf("%d", &k) && k) {
			maior = qt = h = 0;
			falhou = flag = false;
			//~ cout << "entrou no loop" << endl;
			
			for(int i=0; i<n; i++) {			
				if(flag) scanf("%d", &k);
				
				//~ cout << " " << k;
				if(!falhou) {
					if(k > maior) {
						qt++;
						maior = k;
						h = k-qt;
					}
					else {
						if(k-qt != h)
							falhou = true;
					}
					h--;
				}
				flag = true;
			}
			//~ cout << endl;			
			if(falhou) puts("No");
			else 	 puts("Yes");
		}
		puts("");
	}
	return 0;
}
		
