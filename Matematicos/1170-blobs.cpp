#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int days, T;
	double food;

	cin >> T;
	while(T--) {
		cin >> food;
		days = ceil(log2(food));
		cout << days << " dias" << endl;
	}
	return 0;
}