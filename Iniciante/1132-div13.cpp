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
	
	int x, y, b, sum = 0;
	cin >> x >> y;
	
	if(x > y) swap(x,y);
	
	b = x;
	//~ cout << b << " " << y << " lidos" << endl;
	
	if(x%13) x = (x/13)*13 + 13;
	
	for(; x <= y; x+=13)
		sum += x;
	
	cout << (b+y)*(y-b+1)/2 - sum << endl;
	
	return 0;
}
