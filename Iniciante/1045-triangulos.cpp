#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

#define PI 3.14159

int main() {
	ios_base::sync_with_stdio(false);
	cout << setprecision(1) << fixed;
	//~ int m, n;
	double a, b, c;
	//~ double ans;
	
	cin >> a >> b >> c;
	
	if(a < b) swap(a,b);
	if(b < c) swap(b,c);
	if(a < b) swap(a,b);
	
	if(a > b+c) cout << "NAO FORMA TRIANGULO\n";
	else {
		if(a*a == b*b + c*c) 		cout << "TRIANGULO RETANGULO\n";
		else if(a*a > b*b + c*c) 	cout << "TRIANGULO OBTUSANGULO\n";
		else 					 	cout << "TRIANGULO ACUTANGULO\n";
		
		if(a == b || b == c)		cout << "TRIANGULO ISOSCELES\n";
		else if(a == b && b == c) 	cout << "TRIANGULO EQUILATERO\n";
	}
		
	return 0;
}
