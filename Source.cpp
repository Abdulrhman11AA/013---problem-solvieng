#include <iostream>
using namespace std;
#include <string.h>
int main() {
	string x; cin >> x;
	int cou=0;
	for (int i = 0; x[i] != '\0'; i++) {
		//x[0] = x[0] - 32;
		if (x[i] == 'A' || x[i] == 'O' || x[i] == 'Y' || x[i] == 'E' || x[i] == 'U' || x[i] == 'I'
			|| x[i] == 97 || x[i] == 111 || x[i] == 121 || x[i] == 101
			|| x[i] == 117 || x[i] == 105)
			continue;
		else
			cou++;
		if (x[i] > 97 ) x[i] = x[i] - 32;
			cout << "." << x[i];

	}
	if (cou == 0)cout << cou;
	return 0;
}