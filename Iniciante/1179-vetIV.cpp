#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

#define MAX 15
#define sp setprecision
#define pb push_back

vector <int> par;
vector <int> impar;

void flush_par() {
	int sz = par.size();
	for(int i=0; i<sz; i++)
		cout << "par["<<i<<"] = " << par[i] << endl;
	par.clear();
}

void flush_impar() {
	int sz = impar.size();
	for(int i=0; i<sz; i++)
		cout << "impar["<<i<<"] = " << impar[i] << endl;
	impar.clear();
}

int main() {
	ios_base::sync_with_stdio(false);
	cout << sp(4) << fixed;
	
	int n;
	
	for(int k=0; k<MAX; k++) {
		cin >> n;
		if(n & 1) {
			impar.pb(n);
			if((int)impar.size() == 5)
				flush_impar();
		}
		else {
			par.pb(n);
			if((int)par.size() == 5)
				flush_par();
		}
	}
	flush_impar();
	flush_par();
				
	return 0;
}
