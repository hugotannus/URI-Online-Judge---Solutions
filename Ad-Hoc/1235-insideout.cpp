#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	string str, head, tail;
	int N;
	cin >> N;
	cin.ignore();
	
	while(N--) {
		getline(cin,str);
		int sz, SZ;
		sz = SZ = str.size();
		
		//cout << str << endl;
		head.clear();
		tail.clear();

		while( sz > SZ/2 ) {
			sz--;
			tail.pb(str[sz]);
			str.resize(sz);
		}

		if(SZ & 1) tail.resize((SZ/2));

		while( sz > 0 ) {
			sz--;
			head.pb(str[sz]);
			str.resize(sz);
		}
		cout << head << tail << endl;
	}
	return 0;
}