#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(2);
	int T, w, w_avg=0;
	double price, p_avg=0;
	string aux;
	cin >> T;
	for(int i=1; i<=T; i++) {
		cin >> price;
		p_avg += price;
		cin.ignore();
		getline(cin,aux);
		//cout << "aux: "<< aux << endl;
		istringstream iss(aux);
		w=0;
		while(iss >> aux) w++;
		w_avg += w;
		cout << "day " << i << ": " << w << " kg" << endl;
	}
	cout << (double)w_avg/T << " kg by day" << endl;
	cout << "R$ " << p_avg/T << " by day" << endl;
	return 0;
}