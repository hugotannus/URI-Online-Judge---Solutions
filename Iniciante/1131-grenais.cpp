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
	int x, y, q, inter, gremio, emp, count;
	inter = gremio = emp = count = 0;
	
	do {
		cin >> x >> y;
		count++;
		
		if(x == y) emp++;
		else if(x > y) inter++;
		else 		gremio++;
		
		cout << "Novo grenal (1-sim 2-nao)\n";
	} while(cin >> q && q == 1);
	//~ cout << "Acesso Permitido" << endl;
	
	cout << count << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << emp << endl;
	
	if(inter == gremio)
		cout << "Nao houve vencedor" << endl;
	else
		cout << ((inter > gremio)? "Inter" : "Gremio") << " venceu mais" << endl;
	
	return 0;
}
