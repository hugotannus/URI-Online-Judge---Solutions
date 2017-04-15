#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int count=0, avg=0, d;
	string trash;
	while(getline(cin,trash) && (int)trash.size() > 0) {
		//cout << "trash: "<< trash << endl;
		cin >> d;
		avg += d; count++;
		cin.ignore();
	}
	cout << fixed << setprecision(1) << (double)avg/count << endl;
	return 0;
}