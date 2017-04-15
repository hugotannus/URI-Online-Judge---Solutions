#include <iostream>
#include <vector>
using namespace std;

vector <int> reserva(30);

int main() {
	ios_base::sync_with_stdio(false);
	int B, N, d, c, v;
	
	while(cin >> B >> N && B+N) {
		bool fail = false;
		for(int i=1; i<=B; i++) cin >> reserva[i];
		
		for(int i=0; i<N; i++) {
			cin >> d >> c >> v;
			reserva[d] -= v;
			reserva[c] += v;
		}
		
		for(int i=1; i<=B; i++)
			if(reserva[i] < 0) {
				fail = true;
				break;
			}
		
		cout << ( fail ? "N" : "S" ) << "\n";
	}
	
	return 0;
}
