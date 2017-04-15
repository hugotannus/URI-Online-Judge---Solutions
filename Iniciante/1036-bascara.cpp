#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, d;
	double r1, r2;
	
	cin >> a >> b >> c;
	
	d = b*b - 4*a*c;
	if(a == 0 || d < 0) 
		cout << "Impossivel calcular" << endl;
	else {
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		
		cout << setprecision(5) << fixed;
		cout << "R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl;
	}
	
	return 0;
}
