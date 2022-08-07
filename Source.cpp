#include "Complex.h"
int main() {

	Complex C1(2, 3);
	Complex C2 = C1;
	cout << C1 << " : " << C2 << endl;
	cout << C1 + C2 << endl;
	cout << 3.7 + C1 + C2 + 2.45 << endl;

	return 0;
}