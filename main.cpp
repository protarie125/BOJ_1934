#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (a < b) {
		return gcd(b, a);
	}

	if (0 == b) {
		return a;
	}

	return gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t; cin >> t;
	while (0 < (t--)) {
		int a, b; cin >> a >> b;

		cout << a * b / gcd(a, b) << '\n';
	}

	return 0;
}