#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, d, media, s;
	
	cin >> a >> b >> c >> d;
	
	media = (2*a + 3*b + 4*c + d)/10;
	
	cout << setprecision(1) << fixed;
	cout << "Media: " << media << endl;
	
	if(media >= 7.0) 		cout << "Aluno aprovado." << endl;
	else if(media < 5.0)	cout << "Aluno reprovado." << endl;
	else {
		cout << "Aluno em exame." << endl;
		cin >> s;
		cout << "Nota do exame: " << s << endl;
		media = (media+s)/2;
		if(media >= 5)  cout << "Aluno aprovado." << endl;
		else 			cout << "Aluno reprovado." << endl;
		cout << "Media final: " << media << endl;
	}
	return 0;
}
