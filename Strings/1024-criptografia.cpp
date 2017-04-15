#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	
	string str;
	int n;
	
	cin >> n;
	cin.ignore();
	while(n--) {
		getline(cin, str);
		int sz = str.size();
		int half = (sz-1)/2;
		for(int k=str.size()-1; k>half; k--) {
			if(isalpha(str[k]))
				str[k] += 3;
			cout << str[k];
		}
		for(int k=half; k>=0; k--) {
			(isalpha(str[k])) ? str[k] += 2 : str[k] -= 1; 
			cout << str[k];
		}
		cout << "\n";
	}
	return 0;
}
