#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

#define PI 3.14159
#define MAX 3164
#define pb push_back
#define bs binary_search

vector<int> primos;
vector<bool> tab(MAX,true);

void crivo() {
	for(int i=2; i<MAX; i++) {
		if(tab[i]) {
			primos.pb(i);
			//~ cout << " " << primos.back();
			for(int j=i*2; j<MAX; j+=i)
				tab[j] = false;
		}
	}
}			

int main() {
	ios_base::sync_with_stdio(false); 
	cout << setprecision(2) << fixed;
	
	crivo();
	int SZ = primos.size(), n, x, raiz;
	bool flag;
	
	
	cin >> n;
	while(n--) {
		cin >> x;
		flag = true;
		if(x <= primos.back())
			flag = bs(primos.begin(), primos.end(), x);
		else {	
			raiz = floor(sqrt(x)) + 1;
			//~ cout << "raiz: " << raiz << endl;
			//~ cout << "SZ: " << SZ << endl;
			for(int i=0; primos[i] < raiz && i<SZ; i++) {
				if(x%primos[i] == 0) {
					//~ cout << "divisivel por " << primos[i] << endl;
					flag = false;
					break;
				}
			}
		}
		//~ cout << sum << endl;
		cout << x << (flag ? "" : " nao") << " eh primo\n";
	}
				
	return 0;
}
