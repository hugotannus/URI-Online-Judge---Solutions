#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

#define PI 3.14159

int main() {
	ios_base::sync_with_stdio(false);
	cout << setprecision(2) << fixed;
	double n;
	double v[] = {100, 50, 20, 10, 5, 2};
	double m[] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
	
	cin >> n;
	cout << "NOTAS:\n";
	for(int i=0; i<6; i++) {
		cout << (int)floor(n/v[i]) << " nota(s) de R$ " << v[i] << "\n";
		n = fmod(n,v[i]);
	}
	cout << "MOEDAS:\n";
	for(int i=0; i<6; i++) {
		cout << (int)floor(n/m[i]) << " moeda(s) de R$ " << m[i] << "\n";
		n = fmod(n,m[i]);
	}
		
	return 0;
}
