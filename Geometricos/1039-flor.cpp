#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int r, R, x1, y1, x2, y2, a, b;
	bool rico;
	
	while(cin >> R >> x1 >> y1 >> r >> x2 >> y2) {
		rico = true;
		
		a = x2-x1;
		b = y2-y1;
		
		if(R < r) rico = false;
		if( (a*a+b*b) > (R-r)*(R-r) ) rico = false;
		
		if(rico) cout << "RICO\n";
		else 	 cout << "MORTO\n";
	}
	return 0;
}
