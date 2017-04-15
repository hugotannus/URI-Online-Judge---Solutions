#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, count;
	string str;
	
	cin >> n;
	while(n--) {
		cin >> str;
		count = 0;
		stack <char> s;
		for(int i=0; i<(int)str.size(); i++) {
			switch(str[i]) {
				case '<':
				//~ cout << "empilhou!" << endl;
				s.push('x');
				break;
				case '>':
				//~ cout << "desempilhou" << endl;
				if(!s.empty()) {
					s.pop();
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
