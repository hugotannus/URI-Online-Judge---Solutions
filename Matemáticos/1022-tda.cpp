#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int gcd(int a, int b) {
	int c;
	do {
		c = a%b;
		a = b;
		b = c;
	} while (c);
	return a;
}

int lcm(int a, int b) {
	return a*b/gcd(a,b);
}

int main() {
	ios_base::sync_with_stdio(false);
	
	int N, n1, d1, n2, d2, n, d, gd;
	char op;
	scanf("%d", &N);
	while(N--) {
		scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
		switch(op) {
			case '-':
			n2 = -n2;
			case '+':
			d = d1*d2;
			n = (d/d1*n1) + (d/d2*n2);
			break;
			case '/':
			swap(n2,d2);
			case '*':
			n = n1*n2;
			d = d1*d2;
		}
		cout << n << "/" << d << " = ";
		gd = gcd(abs(n),d);
		n /= gd; d /= gd;
		cout << n << "/" << d << "\n";
	}
	return 0;
}
