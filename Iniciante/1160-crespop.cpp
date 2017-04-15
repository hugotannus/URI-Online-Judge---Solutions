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
	
	int count, n;
	double p1, p2, g1, g2;
	//~ int x, y;
	
	cin >> n;
	while(n--) {
		cin >> p1 >> p2 >> g1 >> g2;
		g1 = 1 + g1/100;
		g2 = 1 + g2/100;
		for(count = 0; p1 <= p2 && count <= 100; count++)  {
			p1 *= g1;
			p2 *= g2;
		}	
		if(count > 100) 
			cout << "Mais de 1 seculo.\n";
		else
			cout << count << " anos.\n";
	}
				
	return 0;
}
