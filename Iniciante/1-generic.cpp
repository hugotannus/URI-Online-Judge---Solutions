#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <stack>
using namespace std;

#define MAX 21
#define sp setprecision
#define pb push_back
#define INF 0x3f3f3f3f

int gcd(int a, int b) {
	while(b) {
		a = a%b;
		swap(a,b);	
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout << setprecision(2) << fixed;
	
	//~ int N, mark, pos, cor;
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cout << "\t";
			if(i+j < 5)
				cout << i*0.25 << " , " << j*0.25;
			else
				cout << "---- , ----";
		}
		cout << endl;
	}
	
	return 0;
}
