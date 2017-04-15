#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	
	while(cin >> str) {
		bool fail = false;
		stack <char> s;
		int sz = str.size();
		for(int i=0; !fail && i<sz ; i++) {
			switch(str[i]) {
				case '(':
				//~ cout << "empilhou!" << endl;
				s.push('x');
				break;
				case ')':
				//~ cout << "desempilhou" << endl;
				if(s.empty()) 	fail = true;
				else 		s.pop();
			}
		}
		cout << ((fail || !s.empty())?"in":"") << "correct" << endl;
	}
	return 0;
}
