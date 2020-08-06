#include "base64.h"

using namespace std;

int main() {
	base64 b;
	string str;
	while (true) {
		cout << "Enter string:\n\t ";
		getline(cin, str);
		if (!cin) break;
		str = b.encode(str);
		cout << "Encoded: " << str << '\n';
		cout << "Decoded: " << b.decode(str) << "\n\n";
	}

	return 0;
}