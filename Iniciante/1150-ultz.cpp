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
	
	int a,n, sum=0, count=0;
	//~ bool flag;
	
	cin >> a;
	do cin >> n;
	while(n <= 0);
	
	do {
		sum += a++;
		count++;
	} while(sum <= n);	
		
	cout << count << endl;	
		
	return 0;
	
}
