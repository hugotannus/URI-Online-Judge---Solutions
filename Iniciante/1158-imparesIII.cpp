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
	
	int n;
	int x, y;
	
	cin >> n;
	while(n--) {
		cin >> x >> y;
		x = (x/2)*2 + 1;
			
		cout << (x + y - 1)*y << endl;
	}
			
	return 0;
	
}
