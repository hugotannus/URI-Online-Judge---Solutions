#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

char mapa[300];

int main()
{
	string line;
	
	mapa['1'] = '`';
	mapa['2'] = '1';
	mapa['3'] = '2';
	mapa['4'] = '3';
	mapa['5'] = '4';
	mapa['6'] = '5';
	mapa['7'] = '6';
	mapa['8'] = '7';
	mapa['9'] = '8';
	mapa['0'] = '9';
	mapa['-'] = '0';
	mapa['='] = '-';
	mapa['W'] = 'Q';
	mapa['E'] = 'W';
	mapa['R'] = 'E';
	mapa['T'] = 'R';
	mapa['Y'] = 'T';
	mapa['U'] = 'Y';
	mapa['I'] = 'U';
	mapa['O'] = 'I';
	mapa['P'] = 'O';
	mapa['['] = 'P';
	mapa[']'] = '[';
	mapa['\\'] = ']';
	mapa['S'] = 'A';
	mapa['D'] = 'S';
	mapa['F'] = 'D';
	mapa['G'] = 'F';
	mapa['H'] = 'G';
	mapa['J'] = 'H';
	mapa['K'] = 'J';
	mapa['L'] = 'K';
	mapa[';'] = 'L';
	mapa['\''] = ';';
	mapa['X'] = 'Z';
	mapa['C'] = 'X';
	mapa['V'] = 'C';
	mapa['B'] = 'V';
	mapa['N'] = 'B';
	mapa['M'] = 'N';
	mapa[','] = 'M';
	mapa['.'] = ',';
	mapa['/'] = '.';
	mapa[' '] = ' ';
	
	while(getline(cin, line))
	{
		int sz = line.size();
		for(int i=0; i<sz; i++)
			line[i] = mapa[line[i]];
		
		cout << line << endl;
	}
	return 0;
}
