#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#
using namespace std;

#define PI 3.14159
#define MAX 100

int main() {
	ios_base::sync_with_stdio(false);
	cout << setprecision(2) << fixed;
	
	//~ int N;
	double x, y, q;
	string ans;
	
	do {
		while(cin >> x && (x < 0 || x > 10))
			cout << "nota invalida\n";
			
		while(cin >> y && (y < 0 || y > 10))
			cout << "nota invalida\n";
		
		cout << "media = " << (x+y)/2 << endl;
		
		do cout << "novo calculo (1-sim 2-nao)\n";
		while(cin >> q && q != 1 && q != 2);
		
	} while(q == 1);
	//~ cout << "Acesso Permitido" << endl;
	
	return 0;
}
